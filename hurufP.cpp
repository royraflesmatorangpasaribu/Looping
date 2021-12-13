#include <iostream>
using namespace std;

//minimal terdapat satu fungsi utama
int main(){
	
	//deklarasi variabel
	int n=5;
	int x=(n/2)+1;
	int i, j;
	
	//looping yang membentuk pola Z
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if((i==1 && j<=x )|| j==1 ||(j==x && i<=x) ||(i==x && j<=x)){
				cout<<"* "; // 1 karakter lalu spasi
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
