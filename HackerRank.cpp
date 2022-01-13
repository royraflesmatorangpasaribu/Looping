//libbrary dari HackerRank
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Fungsi
int main() {
    //deklarasi variabel
    int n;
    
    //input
    cin >>n;
    
    //looping
    if (){
       for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++){
                cout <<i <<" ";
            }
           cout <<endl;     //mencetak baris baru
        }
    }else{
        cout <<"Bilangan tidak sesuai!"<<endl;  //pengkondisian ketika n diluar rentang n>-10 && n<10
    }  
    
    //karena menggunakan fungsi main()
    return 0;
}
