#include<iostream>
using namespace std;

//fungsi utama
int main(){
	
	//deklarasi variabel yang digunakan
	int n=5;
	int i, j;
	int x=1;
	
	//looping yang membentuk pola
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(j==1 || j==n || i==1 ||i==n){
				cout<<"O "; // huruf 0 lalu 1 spasi
			}
			else{
				cout<<"  "; // 2 spasi
			}
		}
		cout<<endl;
	}
	return 0;
}

