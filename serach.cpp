//searching itu adalah salah satu teknik dalam pemrograman 
//untuk mencari data, apakah data tersebut ada di dalam
//suatu kumpulan data

//dequential search -> membandingkan  data/angka yang di cari dengan seluruh elemen
//pada suatu data secara satu persatu

#include <iostream>
using namespace std;

int main(){
	//variabel yang digunakan
	int cari, n;
	bool cek = false;
	
	cout<<"Masukkan n : ";
	cin>>n;
	
	//array 0
	int arr[n];
	cout<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Masukkan Angka ke-"<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"\nAngka yang ingin dicari : ";
	cin>>cari;
	
	for(int i=0; i<n; i++){
		if(cari==arr[i]){  //apakah ... itu sama dengan ... ? jika true cetak
			cout<<"Data ditemukan pada indeks ke-"<<i+1 <<endl;
			cek = true;
		}
	}
	if(cek==false){
		cout<<"Data tidak ditemukan";
		
		return 0;
	}
}
