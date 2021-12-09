#include <iostream>
#include <windows.h>
using namespace std;

//fungsi prosedur waktu
void waktu(){
	
	int i;
	
	for(int i=5; i>=0 ; i--){
		cout << "waktu : ";
		cout << i;
		Sleep(1000);
		system("cls");
		
	}
	
	
}

int main(){
	//memanggil prosedur fungsi waktu
	waktu();
}
