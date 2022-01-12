#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu
//pada 12 Januari 2022

//minimal terdapat satu fungsi
int main(){
	//mendeklrasasikan variabel
	int i, j, k, l;
	
	//looping yang membentuk pola
	for(i=1; i<=3; i++){
		for(j=2; j>0; j--){
			for(k=2; k>=i; k--){
				cout<<" ";	//1 spasi
			}
			for(l=0; l<i; l++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	return 0;
}
