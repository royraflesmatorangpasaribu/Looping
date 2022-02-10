#include<iostream>
using namespace std;

//program dibuat pada 08 Februari 2022
//oleh oleh roy rafles matorang pasaribu

//fungsi utama
int main(){
	//deklarasi variabel
	int n=7, x=1;
	
	//looping 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<x++<<"* ";    //beri 1 spasi
		}
		//mencetak baris baru
		cout<<"\n";
	}
	//karena menggunakan fungsi main()
	return 0;
}
