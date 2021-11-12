#include<iostream>
using namespace std;
int main(){
	int p, l, luas;
	string ulang;
	
	//penerapan do-while
	do{
		cout<<"======================================="<<endl;
		cout<<"Program Menentukan Luas Persegi Panjang"<<endl;
		cout<<"======================================="<<endl<<endl;
		cout<<"Masukkan Panjang \t: ";
		cin>>p;
		cout<<"Masukkan Lebar \t\t: ";
		cin>>l;
		cout<<endl;
		
		luas=p*l;
		
		cout<<"Luas Persegi Panjang adalah "<<luas<<endl<<endl;
		cout<<"Ulangi Proses ? (y/n)"<<endl;
		cin>>ulang;
	
	}while (ulang =="y");
	cout<<"\nProgram Selesai"<<endl;
	
	return 0;
}
