#include<iostream>
using namespace std;

//fungsi utama
int main(){
	//deklarasi variabel
	int n=7, x=1;
	
	//looping 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<x++<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
