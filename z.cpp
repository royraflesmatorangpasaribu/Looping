#include<iostream>
using namespace std;

//minimal terdapat satu fungsi
int main(){
	
	//deklarasi variabel
	int n=5;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1||i==n||j==n-i+1){
				cout<<"z "; //1 spasi
			}
			else{
				cout<<"  "; //2 spasi
			}
		}
		cout<<endl;
	}
	return 0;
}
