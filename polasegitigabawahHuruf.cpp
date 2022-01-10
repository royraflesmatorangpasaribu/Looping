#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu
//pada 11 Januari 2022

//minimal terdapat satu fungsi dalam program 
int main(){
	//deklarasi variabel
	int n=5;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<2*n; j++){
			if(j==i || j==2*n-i){
				cout<<(char)(j+64);
			}
			else{
				cout<<" "; // 1 spasi
			}
		}
		cout<<endl;  //mencetak baris baru
	}
	return 0;  //karena menggunakan fungsi main()
}
