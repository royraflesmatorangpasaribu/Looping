#include<iostream>
using namespace std;

int main(){
	int n=5;
	int m=n/2+1;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==m || j==m)
				cout<<abs(i-j)<<" ";
			else{
				cout<<"  ";
			}	
			
		}
		cout<<endl;
	}
	return 0;
}
