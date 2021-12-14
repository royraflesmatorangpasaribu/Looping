#include<iostream>
using namespace std;

//minimal terdapat satu fungsi
int main(){
	//deklarasi variabel
	int n=5;
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if((j==1||j==n)||(i==1||i==n))
			cout<<"*";
			else
			cout<<"#";
		}
		cout<<endl;
	}
	return 0;
}
