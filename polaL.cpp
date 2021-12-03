#include<iostream>
using namespace std;

//fungsi utama
int main(){
	//variabel yang digunakan
	int n=5;
	
	//looping
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j==1||(i==n&&j<=(n/2)+1)){
			cout<<"* ";	
			}
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
