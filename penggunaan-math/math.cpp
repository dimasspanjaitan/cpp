#include <iostream>
#include <math.h>
using namespace std;

int main () {
   	int data;
   	string respons;
   	double angka, pangkat, hasil_pangkat, hasil_akar_kuadrat, hasil_akar_kubik;
   	
   	menu:
   	system("cls");
   	cout<<"========================================="<<endl;
   	cout<<"\tPROGRAM FUNGSI MATH.H"<<endl;
   	cout<<"========================================="<<endl;
   	cout<<"Menu Pilihan"<<endl;
   	cout<<"1. Pemangkatan"<<endl;
   	cout<<"2. Akar kuadrat"<<endl;
   	cout<<"3. Akar kubik"<<endl;
   	cout<<"-----------------------------------------"<<endl;
   	cout<<"Masukkan pilihan : ";
   	cin>>data;
   
   	if(data == 1) {
		system("cls");
		cout<<"========================================="<<endl;
		cout<<"    PEMANGKATAN DENGAN FUNGSI MATH.H"<<endl;
		cout<<"========================================="<<endl;
		cout<<"Masukkan angka\t\t: ";
	   	cin>>angka;
	   	cout<<"Masukkan pangkat\t: ";
	   	cin>>pangkat;
	   	
	   	hasil_pangkat = pow(angka,pangkat);
	   	cout<<endl;
   		cout<<"Hasil\t\t\t: "<<angka<<" pangkat "<<pangkat<<" = "<<hasil_pangkat<<endl;
   		cout<<"-----------------------------------------"<<endl;
   	}else if(data == 2){
   		system("cls");
		cout<<"========================================="<<endl;
		cout<<"    AKAR KUADRAT DENGAN FUNGSI MATH.H"<<endl;
		cout<<"========================================="<<endl;
		cout<<"Masukkan angka\t\t: ";
	   	cin>>angka;
	   	
	   	hasil_akar_kuadrat = sqrt(angka);
	   	cout<<"Hasil\t\t\t: "<<"Akar kuadrat dari "<<angka<<" = "<<hasil_akar_kuadrat<<endl;
	   	cout<<"-----------------------------------------"<<endl;
	}else if(data == 3){
		system("cls");
		cout<<"========================================="<<endl;
		cout<<"    AKAR KUADRAT DENGAN FUNGSI MATH.H"<<endl;
		cout<<"========================================="<<endl;
		cout<<"Masukkan angka\t\t: ";
	   	cin>>angka;
	   	
	   	hasil_akar_kubik = cbrt(angka);
	   	cout<<"Hasil\t\t\t: "<<"Akar kubik dari "<<angka<<" = "<<hasil_akar_kubik<<endl;
	   	cout<<"-----------------------------------------"<<endl;
	}
	cout<<"Kembali ke menu? Y/N : ";
	cin>>respons;
	if(respons == "y" || respons == "Y") goto menu;
	else exit(0);
	
   	return 0;
}
