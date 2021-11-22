#include<iostream>
using namespace std;

int main(){
	int n=5;
	int i, j;
	
	for(i=0; i<=n; i++){
		for(j=0; j<=i; j++){
			if(j!=0)
				cout<<"*";
			else
				cout<<i;
		}
		cout<<endl;
	}
return 0;
}

