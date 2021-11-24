#include<iostream>
using namespace std;

//minimal harus ada satu fungsi dalam program C++
int main(){
	//deklarasi variabel yang digunakan
	int tinggiP=5;
	int panjangP=4;
	int i, j, k;
	
	//looping
	for(i=1; i<=tinggiP; i++){
		for(j=1; j<=panjangP; j++){
			for(k=1; k<=tinggiP; k++){
				if(i==k || i+k==tinggiP+1)
				cout<<">>";
				else
				cout<<" ";
			}
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
