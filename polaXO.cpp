#include<iostream>
using namespace std;

//minimal terdapat satu fungsi
int main(){
	//looping yang membentuk pola
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			if(i<=j)
			cout<<"o"; //1 karakter yang mau ditampilkan
			else
			cout<<"x"; //1 karakter yang mau ditampilkan
		}
		cout<<endl; //mencetak baris baru
	}
	//karena menggunakan fungsi main()
	return 0;
}
