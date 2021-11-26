#include<iostream>
using namespace std;

//dibuat oleh Roy Rafles Matorang Pasaribu

//fungsi utama di dalam C++
int main(){
    //variabel yang digunakan
    int n, a, r;
    
    //input
    cout<<"Masukkan a (Suku Pertama)                  : ";
    cin>>a;
    cout<<"Masukkan n (Jumlah suku yang ingin dicari) : ";
    cin>>n;
    cout<<"Masukkan r (rasio)                         : ";
    cin>>r;
    
    //looping yang membentuk deret geometri
    for(int i=1; i<=n; i++){
    	//output
       cout<<" "<<a;
       a=a*r;
    }
return 0;
}
