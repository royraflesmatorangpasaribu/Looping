//searching itu adalah salah satu teknik dalam pemrograman 
//untuk mencari data, apakah data tersebut ada di dalam
//suatu kumpulan data

//dequential search -> membandingkan  data/angka yang di cari dengan seluruh elemen
//pada suatu data secara satu persatu

#include <iostream>
using namespace std;

int main(){
	int arr[5]={2,3,4,5,5};
	int cari;
	bool cek = false;
	
	cout<<"Angka yang ingin dicari : ";
	cin>>cari;
	
	for(int i=0; i<5; i++){
		if(cari==arr[i]){  //apakah ... itu sama dengan ... ? jika true cetak
			cout<<"Data ditemukan pada indeks ke- "<< i+1 <<endl;
			cek = true;
		}
	}
	if(cek==false){
		cout<<"Data tidak ditemukan";
		
		return 0;
	}
}
