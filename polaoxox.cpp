#include<iostream>
using namespace std;

//fungsi utama
int main(){
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			if(i==j)
			cout<<"o";
			else
			cout<<"x";
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
