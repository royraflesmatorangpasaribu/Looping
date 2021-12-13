#include <iostream>
using namespace std;

int main(){
	int n=5;
	int x=(n/2)+1;
	int i, j;
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if((i==1 && j<=x )|| j==1 ||(j==x && i<=x) ||(i==x && j<=x)){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
