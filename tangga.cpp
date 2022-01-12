#include<iostream>
using namespace std;
int main(){
	int i, j, k, l;
	for(i=1; i<=3; i++){
		for(j=2; j>0; j--){
			for(k=2; k>=i; k--){
				cout<<" ";
			}
			for(l=0; l<i; l++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	return 0;
}
