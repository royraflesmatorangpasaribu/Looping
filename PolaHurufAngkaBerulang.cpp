#include<iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program c++
int main(){
	
	//deklarasi variabel
	float n=5;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=i)
			cout<<(n-i+1)<<" "; // 1 spasi
			else
			cout<<(char)(i+64)<<" "; // 1 spasi
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
