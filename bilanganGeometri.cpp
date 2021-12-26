#include<iostream>
using namespace std;
int main(){
	int a, r, n;
	
	cout<<"Program Bilangan Geometri"<<endl;
	cout<<"by Royrafmp\n\n"<<endl;
	cout<<"Masukkan Bilangan Pertama              : ";
	cin>>a;
	cout<<"Masukkan Rasio Bilangan                : ";
	cin>>r;
	cout<<"Masukkan Batas yang ingin di tampilkan : ";
	cin>>n;
	
	cout<<"\n\nBarisan Bilangan Geometrinya adalah : \n";
	for(int i=1; i<=n; i++){
		cout<<" "<<a;
		a=a*r;
	}
	//karena menggunakan fungsi main()
	return 0;
}
