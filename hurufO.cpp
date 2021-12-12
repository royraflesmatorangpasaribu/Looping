#include<iostream>
using namespace std;

int main(){
	int n=5;
	int i, j;
	
	int x=1;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(j==1 || j==n || i==1 ||i==n){
				cout<<"O ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}

