#include<iostream>
using namespace std;

//minimal terdapat 1 fungsi
int main(){
	//variabel yang digunakan
	int n=5, x=n;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=x; j++){
			if(i<=n/2+1){
				cout<<(j+i-1)<<" "; //1 spasi
			}
			else{
				cout<<(j+i-x)<<" "; //1 spasi
			}
		}
		cout<<endl;
		if(i<=n/2)
		x-=2;
		else
		x+=2;
	}
	return 0;
}
