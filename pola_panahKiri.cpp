#include<iostream>
using namespace std;
//program dibuat oleh Roy Rafles Matorang Pasaribu, 
//saturday, November 27, 2021

//fungsi utama dalam c++
int main(){
	//variabel yang digunakan
	int n=7, x=n/2+1;
	
	//looping yang membentuk pola panah
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==n/2+1 || j==x){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
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
