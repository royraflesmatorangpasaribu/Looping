#include<iostream>
using namespace std;

//fungsi utama dalam c++
int main(){
	//panjang
	int n=5, z=1;
	
	for(int i=1; i<=n; i++){
		for(int j=n-1; j>=i; j--){
		cout<<" ";
		}
	for(int k=z; k>=1; k--){
		cout<<abs(k-i);
	}
	z+=2;
	cout<<endl;
	}
}
