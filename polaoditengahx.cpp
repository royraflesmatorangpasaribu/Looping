#include <iostream>
using namespace std;

int main(){
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			if(i==3 && j==3)
			cout<<"o";
			else
			cout<<"x";
		}
		cout<<endl;
	}
	return 0;
}
