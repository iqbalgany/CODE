#include<iostream>
#include<math.h>
#include<iomanip>
#define func(x) x*x-x-2
#define fund(x) x*x*x+x*x-3*x-3
#define funy(x) 3*x*x+2*x-3
#define funf(x) pow(-x*x+3*x+3, 0.333333)

using namespace std;


void garis();
void garis2();
void garisterbuka();
void tertutup();
void terbuka();
//tertutup
double a,b,c,e;
double fa,fb,fc;
//terbuka
double x ,xi, d, er ;
double fxi, xn, ft, fe;
double x1, x2, x3, fx1, fx2, fx3;

//proses
int proses, pil, pil1, pil2;

//fungsi main untuk memanggil fungsi void
int main()
{
	
	pilihan:
	cout<<"\t\t PENYELESAIAN PERSAMAAN NON-LINIER MENGGUNAKAN "<<endl;
	cout<<"\t\t\t METODE TERBUKA DAN TERTUTUP \n\n"<<endl;
	cout<<" MENU PENYELESAIAN SPNL. "<<endl;
	cout<<"_________________________\n"<<endl;
	cout<<"1. NON-LINIER METODE TERTUTUP "<<endl;
	cout<<"2. NON-LINIER METODE TERBUKA"<<endl;
	cout<<"3. LOG OUT\n"<<endl;
	cout<<"Masukkan pilihan : "; cin>>pil;
	system("cls");
	switch(pil){
		case 1:
			tertutup();
		break;
		
		case 2:
			terbuka();
		break;

		case 3:

		break;

		default:
		cout<<"Pilihan tidak ada!!!!"<<endl;
		system("PAUSE");
		system("cls");
		goto pilihan;
		break;
		
	}

	
}


//fungsi untuk garis
void garis(){
	 cout<<"|__________|___________|____________|_______________|_______________|_____________|_______________|"<<endl;
}

void garisterbuka(){
		cout<<"|__________|___________|____________|_______________|_______________|"<<endl;
}

void garis2(){
	cout<<"\t\t  |__________|___________|____________|"<<endl;
}

//void tertutup adalah fungsi untuk menghitung SPNL dengan metode tertutup
void tertutup(){
		proses=1;
		menu1:
		cout<<"\t\t\t\tPENYELESAIAN SISTEM PERSAMAAN NON-LINIER METODE TERBUKA"<<endl;
		cout<<"\t\t\t\t\t      Biseksi dan Regula Falsi "<<endl;
		cout<<"\t\t_______________________________________________________________________________\n\n"<<endl;
		cout<<"Fungsi x^2-x-2=0\n"<<endl;
		cout<<"1. Metode Biseksi    "<<endl;
		cout<<"2. Metode Regula Falsi"<<endl;
		cout<<"3. Ke halaman menu \n"<<endl;
		cout<<"Masukkan pilihan : ";
		cin>>pil1;
		system("cls");
		switch(pil1){
			case 1:
				up:
				proses=1;
				cout<<"\t\t   Penyelsaian persamaan non-linier menggunakan Metode Biseksi "<<endl;
				cout<<"\t\t_________________________________________________________________\n\n"<<endl;
				cout<<"Fungsi x^2-x-2=0\n"<<endl;
				cout<<"masukkan batas bawah : ";
				cin>>a;
				cout<<"masukkan batas atas  : ";
				cin>>b;
				cout<<"masukkan nila error  : ";
				cin>>e;
				
				fa=func(a);
				fb=func(b);
				if(fa*fb>0)
				{
					cout<<"tidak terdapat akar pada interval ["<<a<<","<<b<<"]"<<endl<<endl;
					system("pause");
					system("cls");
					goto up;
				}
					cout<<"\n";
					cout<<"\t\t\t\t________________________"<<endl;
					cout<<"\t\t\t\t|    METODE  BISEKSI   | "<<endl;
					cout<<"\t\t\t\t|______________________|"<<endl;
					cout<<"___________________________________________________________________________________________________"<<endl;
					cout<<"|No.Iterasi|     a     |     b      |      f(a)     |     f(b)      |     c       |   f(c)        |"<<endl;
					cout<<"|__________|___________|____________|_______________|_______________|_____________|_______________|"<<endl;
				do
				{
				//mencari nilai tengah 
				c=(a+b)/2;
				fc=func(c);
				fa=func(a);
				fb=func(b);
				cout<<"|    "<<setw(3)<<proses<<setw(4)<<" |"<<setw(8)<<a<<setw(4)<<" |"<<setw(11)<<b<<" |"<<setw(14)<<fa<<" |"<<setw(14)<<fb<<" |"<<setw(12);
					cout<<c<<" |"<<setw(14)<<fc<<" |"<<endl;
				if(fa*fc< 0)
					{
						b=c;
					}
					else
					{
						a=c;
					}	
				proses=proses+1;
				garis();
				}
				while(fabs(fc)>e);
				cout<<"\n";
				cout<<"Nilai Error             = "<<fc<<"  "<<"<"<<" "<<e<<endl;
				cout<<"solusi persamaan linear = "<<c<<endl;
				
				system("PAUSE");
				system("cls");
				goto menu1;
			
			break;
				
			case 2:
				
				up1:
				proses=1;
				cout<<"\t\tPenyelsaian persamaan non-linier menggunakan Metode Regula Falsi "<<endl;
				cout<<"\t\t_________________________________________________________________\n"<<endl;
				cout<<"Fungsi x^2-x-2=0\n"<<endl;
				cout<<"masukkan batas bawah(a) : ";cin>>a;
				cout<<"masukkan batas atas(b)  : ";cin>>b;
				cout<<"masukkan batas error    : ";cin>>e;
			
				fa=func(a);
				fb=func(b);
				if(fa*fb>0)
				{
					cout<<"tidak terdapat akar pada interval ["<<a<<","<<b<<"]"<<endl<<endl;
					system("pause");
					system("cls");
					goto up1;
				}
					cout<<"\n";
					cout<<"\t\t\t\t________________________"<<endl;
					cout<<"\t\t\t\t|  METODE REGULA FALSI | "<<endl;
					cout<<"\t\t\t\t|______________________|"<<endl;
					cout<<"___________________________________________________________________________________________________\n";
					cout<<"|No.Iterasi|     a     |     b      |      f(a)     |     f(b)      |     c       |   f(c)        |\n";
					cout<<"|__________|___________|____________|_______________|_______________|_____________|_______________|\n";
				do
				{
					
				//mencari nilai tengah
				fa=func(a);
				fb=func(b);
				c= a - (fa*((b-a)/(fb-fa)));;
				fc=func(c);
				cout<<"|    "<<setw(3)<<proses<<setw(4)<<" |"<<setw(8)<<a<<setw(4)<<" |"<<setw(11)<<b<<" |"<<setw(14)<<fa<<" |"<<setw(14)<<fb<<" |"<<setw(12);
					cout<<c<<" |"<<setw(14)<<fc<<" |"<<endl;
				if(fa*fc< 0)
						{
						b=c;
						}
						else
						{
						a=c;
						}
				proses=proses+1;
					
				garis();
				}
				
				while(fabs(fc)>e);
				cout<<"\n"<<endl;
				cout<<"Nilai error             :"<<func(c)<<" " <<"<" <<" " <<e<<endl;
				cout<<"solusi persamaan linear : "<<c<<endl;
			
				system("PAUSE");
				system("cls");
				goto menu1;
				
			break;

			case 3:
				main();

			break;
			
			default:
				cout<<"pilihan tidak tersedia!!"<<endl;
				system("pause");
				system("cls");
				goto menu1;

				
				break;
			
	}
}


//fungsi void untuk menghitung SPNL metode terbuka
void terbuka(){
	
				proses=1;
				menu2:
				cout<<"\t\t\t  PENYELESAIAN SISTEM PERSAMAAN NON-LINIER METODE TERBUKA"<<endl;
				cout<<"\t\t\t\t\t New-Raphson, Secant, dan Iterasi "<<endl;
				cout<<"\t\t_______________________________________________________________________________\n\n"<<endl;
				cout<<"fungsi f(x) = x^3+x^2-3x-3= 0 "<<endl;
				cout<<" \n"<<endl;
				cout<<"1. Metode Newton-Raphson   "<<endl;
				cout<<"2. Metode Secant  "<<endl;
				cout<<"3. Metode Iterasi  "<<endl;
				cout<<"4. Ke Halaman menu "<<endl<<endl;
				cout<<"Masukkan pilihan : "; cin>>pil2;
				system("cls");
				switch(pil2){
					case 1:
				proses=1;

					cout<<"\t\tPenyelesaian Metode SPNL menggunakan Metode Newtom-Rephson \n"<<endl;
					cout<<"fungsi f(x) = x^3+x^2-3x-3 = 0 \n"<<endl;
					cout<<"Masukkan Nilai (xi)  : ";
					cin>>x;
					cout<<"Masukkan Nilai error : ";
					cin>>er;
					
					cout<<"\n";
					cout<<"\t\t\t________________________"<<endl;
					cout<<"\t\t\t|  METODE NEWTON-REPHSON| "<<endl;
					cout<<"\t\t\t|_______________________|"<<endl;
					cout<<"_____________________________________________________________________\n";
					cout<<"|No.Iterasi|     xi    |   xi+1     |     f(xi)     |    f(xi+1)    |\n";
					cout<<"|__________|___________|____________|_______________|_______________|\n";

					do
					{
						fxi=fund(x);
						ft=funy(x);
						xn=x-fxi/ft;
						fe=fund(xn);            
					
						cout<<"|    "<<setw(3)<<proses<<setw(4)<<" |"<<setw(8)<<x<<setw(4)<<" |"<<setw(11)<<xn<<" |"<<setw(14)<<fxi<<" |"<<setw(14)<<fe<<" |"<<endl;

						x=xn;
						fxi=fe;
						
						proses=proses+1;
						garisterbuka();
					}
					
					while(fabs(fe)>er);
						cout<<"\n"<<endl;
						cout<<"Nilai Error                 :"<<fe<<" "<<"<"<<" "<<er<<endl;
						cout<<"Solusi SPNL Newtom-Rephson  :"<<xn<<endl;
						cout<<"\n\n"<<endl;
						system("PAUSE");
						system("cls");
						goto menu2;

			break;

			case 2: 
					proses=1;
				    cout<<"\t\tPenyelesaian Metode SPNL menggunakan Metode Secant \n"<<endl;
					cout<<"fungsi f(x) = x^3+x^2-3x-3 = 0 \n"<<endl;
					cout<<"Masukkan Nilai awal(x1) : ";
					cin>>x1;
					cout<<"Masukkan nilai awal(x2) :" ;
					cin>>x2;
					cout<<"Masukkan Nilai error    : " ; 
					cin>>er;
					
					cout<<"\n";
					cout<<"\t\t\t________________________"<<endl;
					cout<<"\t\t\t|      METODE SECANT    | "<<endl;
					cout<<"\t\t\t|_______________________|"<<endl;
					cout<<"_____________________________________________________________________________________________________________\n";
					cout<<"|No.Iterasi|     x1    |   x2       |       x3      |      f(x1)       |         f(x2)      |      f(x3)     |\n";
					cout<<"|__________|___________|____________|_______________|__________________|____________________|________________|\n"; 
					do
					{
						fx1=fund(x1);
						fx2=fund(x2); 
						x3=x2-((fx2)*(x2-x1))/(fx2-fx1);

						fx3=fund(x3);
						cout<<"|    "<<setw(3)<<proses<<setw(4)<<" |"<<setw(8)<<x1<<setw(4)<<" |"<<setw(8)<<x2<<"    |"<<setw(14)<<x3<<" |"<<setw(14)<<fx1<<"    |"<<setw(16);
						cout<<fx2<<setw(4)<<"    |"<<setw(14)<<fx3<<setw(3)<<" |"<<endl;
						x1=x2;
						x2=x3;
						proses=proses+1;
						 cout<<"|__________|___________|____________|_______________|__________________|____________________|________________|"<<endl;

					}
					while(fabs(fx3)>er);
						cout<<"\n"<<endl;
						cout<<"Nilai Error                 :"<<fe<<" "<<"<"<<" "<<fx3<<endl;
						cout<<"Solusi SPNL Secant          :"<<x3<<endl;
						cout<<"\n\n"<<endl;
						system("PAUSE");
						system("cls");
						goto menu2;

			break;

			case 3:

					proses=1;
					cout<<"\t\tPenyelesaian Metode SPNL menggunakan Metode Iterasi \n"<<endl;
					cout<<"fungsi f(x) = x^3+x^2-3x-3 = 0 \n"<<endl;
					cout<<"Masukkan Nilai (x)   : ";
					cin>>x;
					cout<<"Masukkan Nilai error : " ; 
					cin>>e;
					cout<<"\n";
					cout<<"\t\t\t___________________________"<<endl;
					cout<<"\t\t\t|  METODE NEWTON-REPHSON  | "<<endl;
					cout<<"\t\t\t|_________________________|"<<endl;
					cout<<"\t\t  _____________________________________\n";
					cout<<"\t\t  |No.Iterasi|     x     |   error    |\n";
					cout<<"\t\t  |__________|___________|____________|\n";
					do
					{
						if(x==2){
							cout<<"\t\t  |    "<<setw(3)<<proses<<setw(4)<<" |"<<setw(8)<<x<<setw(4)<<" |"<<setw(11)<<" "<<" |"<<endl;
							
							xn=funf(x);
							er=fabs(((xn-x)/xn))*100;
							x=funf(x);
							garis2();
							proses=proses+1;
						}
						
						
						cout<<"\t\t  |    "<<setw(3)<<proses<<setw(4)<<" |"<<setw(8)<<x<<setw(4)<<" |"<<setw(11)<<er<<setw(2)<<" |"<<endl;
						xi=x;                         
						x=funf(x);
						er=fabs(((x-xi)/xi))*100;
					    garis2();	 	
						proses=proses+1;
						
						
					}
					while(er>e);
						cout<<"\t\t  |    "<<setw(3)<<proses<<setw(4)<<" |"<<setw(8)<<" "<<setw(4)<<" |"<<setw(11)<<er<<setw(2)<<" |"<<endl;
						garis2();
						cout<<endl;
						cout<<"nilai error                = "<<er<<" < "<<e<<endl;
						cout<<"Solusi SPNL metode Iterasi = "<<x<<endl;	
						cout<<"\n\n"<<endl;
						system("PAUSE");
						system("cls");
						goto menu2;
					

			break;

			case 4:
				main();
				
			break;

			default:

				cout<<"pilihan tidak tersedia!!"<<endl;
				system("pause");
				system("cls");
				goto menu2;

			break;

		}
}

	
