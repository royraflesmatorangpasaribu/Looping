#include<iostream>
using namespace std;

int main(){
	int n=5;
	int i, j, s;
	
	for(i=1; i<=n; i++){
		for(s=n-1; s>=i; s--){
		cout<<" ";
		}
		for(j=1; j<=i; j++){
			if(i%2!=0)
				cout<<(char)(i+64)<<" "; //get charakter
			else
				cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}

