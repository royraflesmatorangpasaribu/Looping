#include<iostream>
using namespace std;

//dibuat oleh Roy Rafles Matorang Pasaribu

//fungsi utama di dalam C++
int main(){
    //variabel yang digunakan
    int n=15, b=1, a=0, c=a+b; 
    
    //akan melakukan looping jika kondisi bernilai benar
	while(c<=n){
		cout<<" "<<c;
		c=a+b;
		a=b;
		b=c;
	}
return 0;
}
