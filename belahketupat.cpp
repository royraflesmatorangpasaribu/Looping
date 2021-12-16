#include <iostream>
using namespace std;

int main(){
	//deklarasi variabel
	int n=9;
	int px=n/2+1;
	int i,j;
	
	//looping yang membentuk pola
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(j==px || j==n-px+1){
				cout<<" * "; // 1 spasi bintang 1 spasi
			}
			else{
				cout<<"   "; // 3 spasi
			}
		}
		if(i<=n/2)
		px--;
		else
		px++;
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
