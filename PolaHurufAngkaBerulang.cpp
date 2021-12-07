#include<iostream>
using namespace std;

int main(){
	//deklarasi variabel
	int n=5;
	
	//looping pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=i)
			cout<<(n-i+1)<<" ";
			else
			cout<<(char)(i+64)<<" ";
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
