
#include <iostream>
#include <math.h>
using namespace std;



int main(){

int a,b,c,d;	


	cout<<"Matris Donusturucuye hosgeldiniz"<<endl;
	cout<<"Lutfen 1. ve 2. denklemlerinin katsayilarini sirasiyla assagidaki formata uygun giriniz."<<endl<<endl;
	
	cout<<"  '"<<endl;
	cout<<"x1 = a.x1 + b. x2"<<endl<<endl;
	cout<<"  '"<<endl;	
	cout<<"x2 = c.x1 + d.x2"<<endl;

	
	cout<<"a katsayisi icin deger giriniz "; cin>>a;
	cout<<endl<<"b katsayisi icin deger giriniz "; cin>>b;
	cout<<endl<<"c katsayisi icin deger giriniz "; cin>>c;
	cout<<endl<<"d katsayisi icin deger giriniz "; cin>>d;
	
	
	cout<<"Girilen denklemin Matris formati "<<endl;
	
	cout<<" __        __"<<endl;
	cout<<"|   ";cout<<a; cout<<"   "; cout<<b;   cout<<"    |"<<endl;
	cout<<"|            |"<<endl;
	cout<<"|   ";cout<<c; cout<<"   "; cout<<d;   cout<<"    |"<<endl;
	cout<<"|__        __|"<<endl;


	
	
	cout<<"oz degerler bulma asamasi"<<endl;
	cout<<"lamda gösterimi icin h harfi kullanilmistir."<<endl;
	
		cout<<" __        __"<<endl;
	cout<<"|   ";cout<<a;cout<<"-h"; cout<<"   "; cout<<b;   cout<<"  |"<<endl;
	cout<<"|            |"<<endl;
	cout<<"|   ";cout<<c; cout<<"   "; cout<<d;cout<<"-h";   cout<<"  |"<<endl;
	cout<<"|__        __|"<<endl;
	



	int sabitler = a*b-(b*c);
	int katsayi= - (a+d);
	float kokici =  sqrt(katsayi*katsayi - 4 * 1* sabitler);
	float payda = 2;
	
	float  kok1 = ( -katsayi + kokici ) / payda;
	float  kok2 = ( -katsayi - kokici ) / payda;
	

	float ozdeger1=  kok1;
	float ozdeger2=  kok2;
	
	cout<<"ozdeger1 => "<<ozdeger1<<endl;
	cout<<"ozdeger2 => "<<ozdeger2<<endl;
			
			
	
			
	cout<<"ozdeger "<<ozdeger1<<"icin"<<endl;
	
	cout<<" __        __"<<endl;
	cout<<"|   ";cout<<a-ozdeger1; cout<<"   "; cout<<b;   cout<<"  |"<<endl;
	cout<<"|           |"<<endl;
	cout<<"|   ";cout<<c; cout<<"   "; cout<<d-ozdeger1;   cout<<"  |"<<endl;
	cout<<"|__       __|"<<endl;
					
					
	cout<<a-ozdeger1<<"x1+"<<b<<"x2 = 0"<<endl;
	cout<<c<<"x1+("<<d-ozdeger1<<"x2 =) 0"<<endl;	
	
	cout<<"denklemlerden biri siliniyor ve x1 a cinsinden yaziliyor"<<endl;
	
	
	double x2 =1;
	double x1 = -(d-ozdeger1)/c;
	
	
	cout<<"  __    __     __     __"<<endl;
	cout<<" |   x1   |   | "<<x1 <<"|"<<endl;
	cout<<" |        | = |         |"<<endl;
	cout<<" |   x2   |   |   "   <<x2 <<"     |"<<endl;
	cout<<" |__    __|   |__     __|"<<endl;
	
	
		cout<<"ozdeger "<<ozdeger2<<"icin"<<endl;
	
	cout<<" __        __"<<endl;
	cout<<"|   ";cout<<a-ozdeger2; cout<<"   "; cout<<b;   cout<<"    |"<<endl;
	cout<<"|            |"<<endl;
	cout<<"|   ";cout<<c; cout<<"   "; cout<<d-ozdeger2;   cout<<"    |"<<endl;
	cout<<"|__        __|"<<endl;
					
					
	cout<<a-ozdeger2<<"x1+"<<b<<"x2 = 0"<<endl;
	cout<<c<<"x1+("<<d-ozdeger2<<"x2 =) 0"<<endl;	
	
	cout<<"denklemlerden biri siliniyor ve x1 a cinsinden yaziliyor"<<endl;
	
	
	double x3 =1;
	double x4 = -(a-ozdeger2)/b;
	
	
	cout<<"  __    __     __     __"<<endl;
	cout<<" |   x1   |   |    "<<x3 <<"    |"<<endl;
	cout<<" |        | = |         |"<<endl;
	cout<<" |   x2   |   |   "   <<x4 <<"    |"<<endl;
	cout<<" |__    __|   |__     __|"<<endl;
	
				
}

	





