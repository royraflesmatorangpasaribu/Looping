#include<iostream>
#include<string.h>
using namespace std;

//minimal terdapat satu fungsi dalam bahasa C++
int main(){
	//variabel yang digunakan
	char str[]="ROY"; //disini bebas mau menggunakan kalimat apa disini karena nama saya Roy jadi saya masukkan roy 
	int len=strlen(str); //Fungsi strlen() digunakan untuk menghitung panjang string.
	int i, j;
	
	//looping yang membentuk pola
	for(i=0; i<len; i++){
		for(j=0; j<len; j++){
			if(i==len/2)
			cout<<str[j]<<" ";
			else if(j==len/2)
			cout<<str[i]<<" ";
			else
			cout<<"  "; //2 spasi
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
