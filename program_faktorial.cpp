#include<iostream>
using namespace std;
int main(){
	int i , n, faktorial=1;
	
	cout<<"Masukkan Angka : ";
	cin>>n;
	for(i=1; i<=n; i++){
		faktorial=faktorial*i;
	}
	cout<<"Faktorial dari "<<n<<" adalah "<<faktorial<<endl;
	
	return 0;
}
