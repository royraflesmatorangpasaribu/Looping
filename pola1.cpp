#include<iostream>
using namespace std;
//fungsi utama dalam program
int main(){
	//variabel
	int n=5;
	
	//looping
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1||i==n||j==1||j==n)
			cout<<"1";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main
	return 0;
} 
