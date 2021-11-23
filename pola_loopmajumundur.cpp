#include<iostream>
using namespace std;

//di dalam c++ minimal ada satu fungsi()
int main(){
	//variabel yang digunakan
	int n = 5;
	
	//looping pola 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i%2==1){
			cout<<j<<" ";	
			}
		else{
			cout<<(n-j+1)<<" ";
		}	
		}
		//output baris baru
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
