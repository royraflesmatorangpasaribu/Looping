#include<iostream>
using namespace std;
//program dibuat oleh Roy Rafles Matorang Pasaribu, 
//saturday, November 28, 2021

//fungsi utama dalam c++
int main(){
	//variabel yang digunakan
	int n=7;
	
	//looping yang membentuk pola 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j==i || j==n-i+1 || i==n/2+1 || j==n/2+1){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
