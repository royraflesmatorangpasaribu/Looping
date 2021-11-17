#include<iostream>
using namespace std;

int main(){
	int n=5, m=1;
	
	for(int i=1; i<=n; i++){
		for(int j=n-1; j>=i; j--){
			cout<<" ";
		}
		for(int k=m; k>=1; k--){
			cout<<abs(k-i);
		}
		m+=2;
		cout<<endl;
	}
	return 0;
}
