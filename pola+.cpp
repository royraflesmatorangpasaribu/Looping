//library dalam C++ 
#include<iostream>
using namespace std;

int main(){
	//variabel yang digunakan
	int i, j;
	
	//looping yang membentuk pola
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			if(j==3||i==3)
			cout<<"*";
			else
			cout<<" "; //1 spasi
		}
		//membuat baris baru
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
