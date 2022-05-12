#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int tahun, abad;
	int batas_tahun = 2100;
	string respon;
	
	ulang:
	system("cls");
	cout<<"========================================="<<endl;
   	cout<<"\t  PENGHITUNGAN ABAD"<<endl;
   	cout<<"========================================="<<endl;
   	cout<<"Masukkan tahun : ";
   	cin>>tahun;
   	cout<<""<<endl;
   	
   	if(tahun<=0){
   		cout<<"Hasil tidak ditemukan"<<endl;	
	}else if(tahun<=100){
		abad = 1;
		cout<<"Tahun "<<tahun<<" merupakan abad ke-"<<abad<<endl;	
	}else{
		if(tahun > batas_tahun){
			cout<<"Hasil tidak ditemukan"<<endl;
		}else{
			for(int i; i <= batas_tahun; i++){
				if(i == tahun){
					abad = (tahun + 100)/100;
				}
			}
			cout<<"Tahun "<<tahun<<" merupakan abad ke-"<<abad<<endl;
		}
	}
	cout<<"========================================="<<endl;
	cout<<"Lakukan penghitungan kembali? Y/N : ";
	cin>>respon;
   	
   	if(respon == "Y" || respon == "y"){
   		goto ulang;
	}else{
		exit(0);
	}
   	
   	return 0;
}
