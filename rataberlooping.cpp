#include <iostream>
using namespace std;

int n,i,x,jumlah=0,hasil=0;
string loop="Y";

penjumlahan(int N){
	for(i=1; i<=N; i++){
		cout << "MASUKKAN DATA KE-"<<i<<" = ";
		cin >> x;
		jumlah = jumlah + x;	
	}
	return jumlah;
}

stm(string a){
	cout << "\nMASUKKAN N = ";
	cin >> n;
	if(a=="Y"){
		hasil = penjumlahan(n);
		cout << "=================================\n";
		cout << "JUMLAH    = "<<hasil;
		cout << "\nRATA-RATA = "<<hasil/n<<endl;
		cout << "=================================\n";
	}
	hasil=0;
	jumlah=0;
	cout << "APAKAH INGIN MENGHITUNG KEMBALI ?? (Y/N) : ";
	cin>>loop;		
}

int main(){
	cout << "SELAMAT DATANG DI SISTEM RATA-RATA BILANGAN\n";
	do{
		stm(loop);	
	}while(loop=="Y");
}
