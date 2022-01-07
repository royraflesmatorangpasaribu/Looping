#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu
//pada 08 Januari 2022

int main(){
	int n=5;
	char x='A';
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if((i+j)%2==1){
			cout<<x++<<"";	
			}
			else{
		    cout<<"*";	
			}
		}
		cout<<endl;
	}
	return 0;
}
