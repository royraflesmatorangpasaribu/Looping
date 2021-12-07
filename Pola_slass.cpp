#include<iostream>
using namespace std;

int main(){
	//deklarasi variabel
	int z=1, n=5;
	
	//looping yang membentuk pola
	for(int i=0; i<n; i++){
		for(int j=n-1; j>i; j--){
			cout<<" "; // 1 spasi
		}
		for(int k=0; k<n; k++){
			cout<<"*";
		}
		z++;
		cout<<"\n";
	}
	//karena menggunakan fungsi main()
	return 0;
}
