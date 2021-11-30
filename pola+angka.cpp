#include<iostream>
using namespace std;

int main(){
	//variabel yang digunakan
	int i, j, n=5, m=n/2+1;
	
	//looping yang membentuk pola
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==m||j==m)
			/*abs() = Fungsi ini akan mengubah bilangan menjadi absolute, 
			artinya ABS() akan menghapus atau merubah bilangan negatif menjadi positif.*/
			cout<<abs(i-j)<<" ";
			else
			cout<<"  "; //2 spasi
		}
		//membuat baris baru
		cout<<endl;
	}
	//karena menggunakan fungsi main()
	return 0;
}
