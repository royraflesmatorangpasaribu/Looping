#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu

int main(){
	int n=5, x=2;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<(x-i)<<" ";
			x++;
		}
		cout<<"\n";
	}
	return 0;
}
