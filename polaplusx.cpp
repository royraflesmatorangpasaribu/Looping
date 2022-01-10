#include<iostream>
using namespace std;

//dibuat oleh roy rafles matorang pasaribu
//dibuat pada 09 desember 2022

int main(){
	//deklarasi variabel
	int i, j;
	
	//looping yang membentuk pola
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			if(j==3||i==3)
			cout<<"x";
			else
			cout<<"o";
		}
		//mencetak baris baru
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
