#include<iostream>
using namespace std;

//dibuat pada 11 februari 2022

//fungsi utama
int main(){
	int i, j;
	int n=4, x=1;
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			cout<<(x*x)<<"  ";
			x++;
		}
		cout<<endl;
	}
	return 0;
}
