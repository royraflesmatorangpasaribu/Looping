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
    if (n>-10 && n<10){
       for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++){
                cout <<i <<" ";
            }
           cout <<endl;
        }
    }else{
        cout <<"Bilangan tidak sesuai!"<<endl;
    }  
    
    return 0;
}
