#include<iostream>
using namespace std;

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
