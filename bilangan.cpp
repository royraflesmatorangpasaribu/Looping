#include<iostream>
using namespace std;

//program ini dibuat oleh roy rafles matorang pasaribu
//pada 05 Januari 2022

//
int main(){
	int n=7;
	int x=1;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=x||j>n-x){
				cout<<i<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		if(i<=n/2)
		x++;
		else
		x--;
		cout<<endl;
	}
	return 0;
}