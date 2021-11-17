#include<iostream>
using namespace std;

int main(){
	int n=1;
	
	for(int i=0; i<5; i++){
		for(int j=4; j>i; j--){
			cout<<" ";
		}
		for(int k=1; k<=n; k++){
			cout<<k;
		}
		n+=2;
		cout<<endl;
	}
	return 0;
}
