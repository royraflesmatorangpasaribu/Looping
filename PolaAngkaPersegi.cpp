#include<iostream>
using namespace std;

//program dibuat oleh Roy Rafles Matorang Pasaribu
//pada 07 Januari 2022

//
int main(){
	int n=5;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<i)
			cout<<i;
			else
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
