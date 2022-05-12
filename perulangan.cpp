#include <iostream>

using namespace std;

int main(){
	int angka;
	string respon;
	
	ulang:
	system("cls");
	cout<<"========================================="<<endl;
   	cout<<"Masukkan angka : ";
   	cin>>angka;
   	cout<<"-----------------------------------------"<<endl<<endl;
   	
   	for(int i=1; i<=angka; i++){
   		for(int j=1; j<=i; j++){
   			if(j%2 == 0){
   				cout<<j;	
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
   	cout<<endl<<"========================================="<<endl;
   	cout<<"Lakukan penghitungan kembali? Y/N : ";
	cin>>respon;
   	
   	if(respon == "Y" || respon == "y"){
   		goto ulang;
	}else{
		exit(0);
	}
}
