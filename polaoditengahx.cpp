#include <iostream>
using namespace std;

//minimal terdapat 1 fungsi dalam program C++
int main(){
	
	//looping yang membentuk pola
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			if(i==3 && j==3)
			cout<<"o";
			else
			cout<<"x";
		}
		
		// 1 spasi
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
