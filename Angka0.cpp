#include<iostream>
using namespace std;

//minimal terdapat 1 fungsi dalam program
int main(){
	//deklarasi variabel
	int n=5;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1||i==n||j==1||j==n||i+j==n+1){
				cout<<"* "; //1 karakter 1 spasi
			}
			else{
				cout<<"  "; // 2 spasi
			}
		}
		cout<<endl; //mencetak baris baru
	}
	return 0;
}
