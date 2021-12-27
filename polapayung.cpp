#include<iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program c++
int main(){
	
	//deklarasi variabel
	int n=7;
	int x=n/2+1;
	
	//looping yang membentuk pola
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j==n/2+1||(j<=x&& j>=n-x+1&& i<=n/2+1)){
				cout<<"* "; //karakter bintang lalu 1 spasi
			}
			else{
				cout<<"  "; //2 spasi
			}
		}
		cout<<endl;
		x++;
	}
	return 0;
}
