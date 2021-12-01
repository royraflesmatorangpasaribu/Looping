#include<iostream>
using namespace std;

int main(){
	//variabel yang digunakan
	int n=4;
	
	for(int i=1-n; i<n; i++){
		for(int j=1-n; j<n; j++){
			/*
			abs() = Fungsi ini akan mengubah bilangan menjadi absolute, 
			artinya abs() akan menghapus atau merubah bilangan negatif menjadi positif.
			*/
			if(abs(i)>abs(j)){
				cout<<abs(i)+1<<" ";
			}
			else{
				cout<<abs(j)+1<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
