#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int x,y,z,bil;
	cout<<"==================================="<<endl;
	cout<<"Program Segitiga Siku-Siku Bilangan"<<endl;
	cout<<"==================================="<<endl;
	cout<<"Masukkan Tinggi Segitiga : ";
	cin>>bil;
	cout<<"\n";
	for(x=1; x<=bil; x++){ 
		for(z=bil; z>=x; z--){
		cout<<" ";
			for(z=x; z<2*x ;z++){
			y=z%10;
			cout<<y; 
			} 
				for(z=2*(x-1); z>=x; z--){
				y = z%10;
				cout<<y;
				}
				cout<<"\n";
		}
		
	}
getch();
}
