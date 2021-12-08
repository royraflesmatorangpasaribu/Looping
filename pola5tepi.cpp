#include<iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program C++
int main(){
	int n=5;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1 || i==n || j==1 || j==n)
			cout<<"5";
			else
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}
