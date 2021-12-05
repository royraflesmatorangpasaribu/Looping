#include <iostream>
#include <string.h>
using namespace std;

//minimal terdapat satu fungsi dalam bahasa C++
int main(){
	char arr[]="ROY"; //bebas mau menggunakan nama siapa disini karena nama saya roy jadi saya pakai nama saya
	int len=strlen(arr); //Fungsi strlen() digunakan untuk menghitung panjang string.
	int i, j;
	
	//looping yang membentuk pola
	for(i=0; i<len; i++){
		for(j=0; j<=i; j++){
			cout<<arr[j]<<" "; //1 spasi
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
