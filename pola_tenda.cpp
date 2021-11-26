#include<iostream>
using namespace std;

int main(){
	char n=5;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<2*n ; j++){
			if(j==n+1-i ||j==n+i-1)
					cout<<(char)(j+64);	
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
