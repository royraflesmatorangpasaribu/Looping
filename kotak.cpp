#include<iostream>
using namespace std;

//minimal ada satu fungsi dalam program C++
int main(){
	//variabel yang digunakan
	int n=5;
	
	//looping yang membentuk pola kotak
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j==1||j==n||i==1||i==n){
				cout<<"*";
			}
			else{
				cout<<" ";	//1 spasi	
			}
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
