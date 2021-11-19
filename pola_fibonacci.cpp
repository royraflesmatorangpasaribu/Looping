#include<iostream>
using namespace std;

int main(){
	int n1=0, n2=1, r;
	
	for(int i=1; i<=5; i++){
		for(int j=1; j<=i; j++){
			cout<<r<<" ";
			r=n1+n2;
			n1=n2;
			n2=r;
		}
		cout<<endl;
	}
	return 0;
}

