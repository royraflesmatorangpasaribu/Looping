#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu
//pada 11 Januari 2022

int main(){
	int n=5;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<2*n; j++){
			if(j==i || j==2*n-i){
				cout<<(char)(j+64);
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
