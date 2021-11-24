//searching itu adalah salah satu teknik dalam pemrograman 
//untuk mencari data, apakah data tersebut ada di dalam
//suatu kumpulan data

//dequential search -> membandingkan  data/angka yang di cari dengan seluruh elemen
//pada suatu data secara satu persatu

#include <iostream>
using namespace std;

int main(){
	//data nama yang tersedia
	string kelas[3] = {"brody","roy","cici"};
	
	//variabel yang digunakan
	string cari;
	bool cek = false;
	
	cout << "Nama yang ingin dicari : ";
	getline(cin, cari);
	
	for(int i=0;i<3;i++){
		if(cari==kelas[i]){  //apakah nama ... itu ada di kelas B ? true
			cout << "Nama tersebut adalah mahasiswa kelas B Ilmu Komputer 2021 Universitas Lampung" << endl;
			cek = true;
		}
	}
	
	if(cek==false){
		cout << "Nama tersebut tidak ditemukan pada kelas B Ilmu Komputer 2021 Universitas Lampung";
	}
}
