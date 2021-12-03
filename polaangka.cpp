#include<iostream>
using namespace std;

//fungsi utama
int main(){
	//variabel
	int i, j, n=5;
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(j<i)
			cout<<j;
			else
			cout<<i;
		}
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
