#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu

int main(){
	//deklarasi variabel
	int n=5, x=2;
	
	//looping yang membentuk pola
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<(x-i)<<" ";
			x++;
		}
		cout<<"\n";
	}
	return 0;
}
