#include<iostream>
using namespace std;

//di dalam c++ minimal ada satu fungsi()
int main(){
	//variabel yang digunakan
	int i, j, k, tinggi= 5;
	
	//looping pola 
	for(i=tinggi; i>=1; i--){
		for(k=tinggi-1; k>=i; k--){
			//output spasi
			cout<<" ";
		}
		for(j=i; j>=1; j--){
			cout<<j<<" ";
		}
		//output baris baru
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
