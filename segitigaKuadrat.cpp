#include<iostream>
using namespace std;

//dibuat pada 11 februari 2022
//dan diupdate pada 14 februari 2022

//fungsi utama
int main(){
	//deklarasi variabel
	int i, j;
	int n=4, x=1;
	
	//looping
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			cout<<(x*x)<<"  "; // 2 spasi (bebas sesuai dengan keingnan)
			x++;
		}
		//memcetak baris baru
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
