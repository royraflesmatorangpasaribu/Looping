#include<iostream>
using namespace std;

//dibuat oleh Roy Rafles Matorang Pasaribu

//fungsi utama di dalam C++
int main(){
    //variabel yang digunakan
    int n=10; //banyak baris
	int b=3; //beda 
	int a=2; //suku pertama
    
    //looping yang membentuk baris aritmatika
    for(int i=1; i<=n; i++){
       cout<<" "<<a;
       a=a+b;
    }
return 0;
}
