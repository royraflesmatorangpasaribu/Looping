#include<iostream>
using namespace std;

//dibuat oleh Roy Rafles Matorang Pasaribu 
//Pada 19 Januari 2022

//fungsi utama
int main(){
        //judul Program
	cout<<"Program Menghitung Rata-Rata dan Total serta Convert ke USD"<<endl;
	cout<<"Masukkan Jumlah Ethereum Anda : ";
	
	//deklarasi variabel
	int x;
	
	//input
	cin>>x;
	
        //deklarasi variabel
	double Eth[x], total=0, ratarata=0, usd=0;
        //looping
	for(int i=1; i<=x; i++){
		cout<<"Masukkan Ethereum ke-"<<i<<" : ";
		cin>>Eth[i];
		total = total + Eth[i];
	}
	cout<<endl;  //mencetak baris baru
	ratarata = total/x;
	usd = total * 4000;
	system("CLS");
	
	//output
	cout<<"Program by royrafmp"<<endl;
	cout<<"Rata-Rata : "<<ratarata<<" ETH "<<endl;
	cout<<"Total ETH : "<<total<<" ETH "<<endl;
	cout<<"Dalam USD : $"<<usd<<endl;
}
