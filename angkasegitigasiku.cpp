#include<iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program
int main(){
	//deklarasi variabel
	int n=5;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(j==1|| j==i|| i==n){
				cout<<i<<" ";
			}
			else{
				cout<<"  "; // 2 spasi
			}
		}
		cout<<endl;  //mencetak baris baru
	}
	//karena menggunakan fungsi main()
	return 0;
}
