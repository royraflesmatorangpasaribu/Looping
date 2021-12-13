#include <iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program
int main(){
	//deklarasi variabel
	int n=5;
	
	//looping yang membentuk pola huruf Z
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1 || i==n || j==n-i+1){
				cout<<"Z "; // 1 karakter lalu 1 spasi
			}
			else{
				cout<<"  "; // 2 spasi
			}
		}
		cout<<endl; //menbuat baris baru (endline)
	}
	//karena menggunakan fungsi main()
	return 0;
}
