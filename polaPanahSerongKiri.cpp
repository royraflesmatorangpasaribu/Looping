#include<iostream>
using namespace std;

//minimal ada satu fungsi dalam program C++
int main(){
	//variabel yang digunakan
	int n=7;
	
	//looping yang membentuk pola panah serong kiri atas
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==1||j==1||i==j){
				cout<<"* ";
			}
			else{
				cout<<"  ";	//2 spasi	
			}
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
