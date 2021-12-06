#include<iostream>
using namespace std;

//minimal terdapat 1 fungsi
int main(){
	//variabel yang digunakan
	int n=5, x=n+1;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=x; j++){
			if(j<=x/2){
				cout<<j<<" "; //1 spasi
			}
			else{
				cout<<(x-j+1)<<" "; //1 spasi
			}
		}
		cout<<endl;
		if(i<=n/2)
		x-=2;
		else
		x+=2;
	}
	//karena menggunakan fungsi main()
	return 0;
}
