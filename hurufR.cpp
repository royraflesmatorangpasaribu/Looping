#include <iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program C++
int main(){
	
	//deklarasi variabel
	int n=5;
	int i, j;
	int x=1;
	
	//looping yang membentuk huruf R
	for(i=1; i<=n; i++){
		for(j=1; j<=n/2+1; j++){
			if(j==1 || i==1 || i==n/2+1 ||(i<=n/2 && j==n/2+1) || j==x){
				cout<<"R "; // r lalu spasi
			}
			else{
				cout<<"  "; // 2 spasi
			}
		}
		if(i>n/2)
		x++;
		cout<<endl;
	}
	return 0;
}
