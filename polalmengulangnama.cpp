#include<iostream>
#include<string.h>
using namespace std;

//minimal terdapat satu fungsi dalam bahasa C++
int main(){
	char arr[]="ROY";
	int len=strlen(arr); //Fungsi strlen() digunakan untuk menghitung panjang string.
	int i, j;
	
	//looping
	for(i=0; i<len; i++){
		for(j=0; j<=i; j++){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
