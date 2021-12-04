#include<iostream>
using namespace std;

//fungsi utama dalam program
int main(){
	//deklarasi variabel
	int n=7, x=n/2+1;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=x; j++){
			if(j==x)
			cout<<i;
			else
			cout<<"  "; // 2 spasi
		}
		cout<<endl;
		if(i<=n/2)
		x--;
		else 
		x++;
	}
	//karena menggunakan fungsi main()
	return 0;
}
