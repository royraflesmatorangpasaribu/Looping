#include<iostream>
using namespace std;

int main(){
	int n=5, j, i;
	
	for(i=1; i<+n; i++){
		for(j=1; j<=n; j++){
		if(j>i)
			cout<<"*";
		else
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}

