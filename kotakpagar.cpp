#include<iostream>
using namespace std;

//minimal terdapat satu fungsi
int main(){
	int n=5;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if((j==1||j==n)||(i==1||i==n))
			cout<<"*";
			else
			cout<<"#";
		}
		cout<<endl;
	}
	return 0;
}
