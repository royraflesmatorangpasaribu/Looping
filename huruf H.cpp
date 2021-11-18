#include <iostream>
using namespace std;
main (){
    int angka;

    cout <<"Masukkan Nilai : ";
    cin >> angka;

   for(int a=1; a<=angka; a++){
		for(int i=0; i<angka; i++){
       		if(i<1 || i == angka-1){
    			cout<<"#";
			}

			else if(a == (angka/2)+1){
				cout<<"#";
			}
			else{
				cout<<" ";
			}
	 	}
	cout<<endl;
	}	
return 0;
}
