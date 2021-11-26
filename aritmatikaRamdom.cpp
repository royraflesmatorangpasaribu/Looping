#include<iostream>
using namespace std;

//dibuat oleh Roy Rafles Matorang Pasaribu

//fungsi utama di dalam C++
int main(){
    //variabel yang digunakan
    int n; //banyak baris
	int b; //beda 
	int a; //suku pertama
    
    //input
    cout<<"Masukkan a (Suku Pertama)                  : ";
    cin>>a;
    cout<<"Masukkan n (Jumlah suku yang ingin dicari) : ";
    cin>>n;
    cout<<"Masukkan b (Beda)                          : ";
    cin>>b;
    
    //looping yang membentuk baris aritmatika
    for(int i=1; i<=n; i++){
       cout<<" "<<a;
       a=a+b;
    }
return 0;
}
