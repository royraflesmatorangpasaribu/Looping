#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu
//di buat pada 06 februari 2022 dan di edit pada 07 februari 2022 

//fungsi utama
int main(){
	//deklarasi variabel
	int n=5, x=2;
	
	//looping yang membentuk pola
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<(x-i)<<" ";
			x++;
		}
		//mencetak baris baru
		cout<<"\n";
	}
	//karena menggunakan fungsi main()
	return 0;
}
