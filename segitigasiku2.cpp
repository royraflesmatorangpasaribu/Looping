#include<iostream>
using namespace std;

//program ini dibuat oleh roy rafles matorang pasaribu
//pada 05 Januari 2022

//minimal terdapat satu fungsi
int main(){
	//deklarasi variabel
	int n=5;
	
	//looping yang membentuk pola
	for(int i=n; i>=0; i--){
		for(int j=0; j<=i; j++){
		if(j!=0)
		cout<<"*";
		else
		cout<<i;	
		}
		cout<<endl;
	}
	//karena menggunaka fungsi main()
	return 0;
}
