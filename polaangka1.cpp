#include<iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program C++
int main(){
	//deklarasi variabel 
	int n=5;
	int mid=n/2+1;
	
	//Looping pola * membentuk angka 1
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j==mid || i==n || (i+j==mid && j<=mid))
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
