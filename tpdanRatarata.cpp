#include <iostream>
using namespace std;
/* 
   Nama		: Roy Rafles Matorang Pasaribu
   NPM 		: 2117051058
   Kelas 	: B
*/
int main(){
	float N, i, x, jumlah=0;
	//input
	cout << "Masukkan N Jumlah Bilangan : ";
	cin >> N;
	for(i=1; i<=N; i++){
        cout << "Masukkan Data Ke-" << i << " : ";
		cin >> x;
		jumlah = jumlah+x;
	}
	//output
	cout << "\nTotal Penjumlahan\t : " << jumlah << endl;
	cout << "Rata-rata\t\t : "<< jumlah/N;
	return 0;
}
