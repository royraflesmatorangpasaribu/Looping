#include<iostream> 
using namespace std;  
main(){  
	int i , j , k, tinggi ;  
	cout<<"Program Membentuk Pohon Natal"<<endl;
	cout<<"Masukan Tinggi Pohon : ";  
	cin>>tinggi;  
	for(i=tinggi;i>=0;i--){  
		for(j=i;j>=0;j--){  
	cout<<" ";  
		}  
			for(k=1;k<=tinggi-i;k++){  
			cout<<"*";  
			}  
				for(k=1;k<tinggi-i;k++){  
				cout<<"*";  
				}  
				cout<<endl;  
	}  
 
}
