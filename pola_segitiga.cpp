#include<iostream>
using namespace std;

int main(){
	//variabel yang digunakan
	int z=1;
	
	//looping yang membentuk pola segitiga
	for(int i=0; i<5; i++){
		for(int j=4; j>i; j--){
			cout<<" ";
		}
		for(int k=0; k<z; k++){
			cout<<z;
		}
		z+=2;
		cout<<endl;
	}
}
