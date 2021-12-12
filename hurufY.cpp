#include <iostream>
using namespace std;

//minimal terdapat 1 fungsi main()
int main(){
	//deklarasi variabel
	int n=5;
	
	//looping yang membentuk
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if((j==i||j==n-i+1)&& i<=n/2+1 ||(j==n/2+1 && i>n/2)){
				cout<<"Y ";	// huruf Y lalu spasi
			}
			else{
				cout<<"  ";	// 2 spasi 
			}
		}
		cout<<endl;	// baris membantuk baru
	}
	//karena menggunakan fungsi main()
	return 0;
}
