#include<iostream>
using namespace std;

int main(){
	int pTinggi=5;
	
	for(int i=1; i<=pTinggi; i++){
		for(int k=pTinggi-1; k>=i; k--){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
