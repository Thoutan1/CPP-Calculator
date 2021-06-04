#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int no1,no2, pil;
	float hasil;
	string Kalkulasi;
	
	cout<<"Pilih Kalkulasi"<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<endl;
	
	cout<<"Masukan Pilihan Kalkulasi Mu : ";
	cin>>pil;
	cout<<"Masukan Bilangan Yang Pertama : ";
	cin>>no1;
	cout<<"Masukan Bilangan Yang Kedua : ";
	cin>>no2;	
	
	switch(pil){
	        case 1 : hasil=no1+no2;
			Kalkulasi='+';
			break;
		case 2 : hasil=no1-no2;
			Kalkulasi='-';
			break;
		case 3 : hasil=no1*no2;
			Kalkulasi='*';
			break;
		case 4 : hasil=no1/no2;
			Kalkulasi='/';
			break;
		case 5 : hasil=no1%no2;
			 Kalkulasi='%';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"    "<<no1<<Kalkulasi<<no2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
}