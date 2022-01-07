#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu
//pada 08 Januari 2022

//minimal tedapat satu fungsi
int main(){
	//deklarasi variabel
	int n=5;
	char x='A';
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if((i+j)%2==1){
			cout<<x++<<"";	
			}
			else{
		    cout<<"*";	
			}
		}
		cout<<endl;
	}
	return 0;
}
