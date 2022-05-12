#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int data;
	char email[100];
	
   	cout<<"========================================="<<endl;
   	cout<<"\tPROGRAM FUNGSI STRING.H"<<endl;
   	cout<<"========================================="<<endl;
   	cout<<"Masukkan email : ";
   	cin>>email;
   	
   	cout<<"Menu Pilihan"<<endl;
   	cout<<"1. Panjang karakter email"<<endl;
   	cout<<"2. HURUF BESAR SEMUA"<<endl;
   	cout<<"3. huruf kecil semua"<<endl;
   	cout<<"4. Kalau dibalik"<<endl;
   	cout<<"5. keluar"<<endl;
   	cout<<"-----------------------------------------"<<endl;
   	
	menu:
	cout<<"Masukkan pilihan\t: "; cin>>data;
   	if(data == 1){
   		cout<<"Hasil\t\t\t: "<<strlen(email)<<endl;	
	}else if(data == 2){
		cout<<"Hasil\t\t\t: "<<strupr(email)<<endl;
	}else if(data == 3){
		cout<<"Hasil\t\t\t: "<<strlwr(email)<<endl;
	}else if(data == 4){
		cout<<"Hasil\t\t\t: "<<strrev(email)<<endl;
	}else exit(0);
	
	goto menu;
   	return 0;
}
