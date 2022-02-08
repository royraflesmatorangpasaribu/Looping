#include<iostream>
using namespace std;

//fungsi utama
int main(){
	int n=7, x=1;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<x++<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
