#include<iostream>
using namespace std;

int main(){
	//delarasi variabel
	int row, col;
	
	//looping yang membentuk pola
	for(row=0; row<6; row++){
		for(col=0;col<7;col++){
			if((row==0 && col%3!=0) || (row==1 && col&& col%3==0) || (row-col==2) || (row+col==8)){
				cout<<"* ";  // 1 karakter lalu spasi
			}
			else{
				cout<<"  ";  // 2 spasi
			}
		}
		//memberikan baris baru
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
