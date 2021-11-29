#include<iostream>
using namespace std;

int main(){
	//batas pola
	int size=3, i, j;
	
	for(i=size; i>=-size; i--){
		for(j=abs(i); j<=size; j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
