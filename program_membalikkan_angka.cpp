#include<iostream>
#include<conio.h>
using namespace std;
//Program membalikkan angka inputan
int main(){
	long a, b, d=0;
	
	cout<<"Masukkan Angka : ";
	cin>>a;
	
	while(a>0){
		b=a%10;
		a=a/10;
		d=(d*10)+b;
	} 
	cout<<"\nHasil Kebalikannya adalah"<<" "<<d<<endl;
	getch();
}

