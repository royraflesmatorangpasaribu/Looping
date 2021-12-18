#include<iostream>
using namespace std;

//minimal terdapat 1 fungsi dalam program
int main(){
	//deklarasi
	int n=5;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1||i==n||j==1||j==n||i+j==n+1){
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
