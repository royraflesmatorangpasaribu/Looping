#include<iostream>
using namespace std;

int main(){
	//deklarasi variabel
	int n=7;
	int x=1;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j==x || j==n-x+1 || i==1 || i==n){
				cout<<"*"; 	//karakter bintang
			}
			else{
				cout<<" ";	//1 spasi
			}
		}
		if(i<=n/2)
		x++;
		else
		x--;
		cout<<endl;	//mencetak baris baru
	}
	//karena menggunakan fungsi main()
	return 0;
}
