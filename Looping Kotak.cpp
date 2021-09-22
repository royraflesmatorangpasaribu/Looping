#include "ncurses.h"
#include "iostream"

using namespace std;

#define pojok (43)
// pojok "+"
#define horizontal (45)
// mendatar "-"
#define vertikal (124)
// vertikal "|"

void kotak(int baris1,int kolom1,int baris2,int kolom2)
{
  int k1, k2, b1, b2, kol, bar;
  k1 = kolom1;
  b1 = baris1;
  k2 = kolom2;
  b2 = baris2;
  //baris atas mendatar
  mvprintw(b1,k1,"%c",pojok);
  
  for(kol=k1+1;kol<=k2;kol++)
  {
    mvprintw(b1,kol,"%c",horizontal);
    //getch();
  }
  mvprintw(b1,k2,"%c",pojok);
  
  //kolom kanan ke bawah
  for(bar=b1+1;bar<=b2;bar++)
  {
    mvprintw(bar,k2,"%c",vertikal);
    //getch();
  }
  mvprintw(b2,k2,"%c",pojok);
  
  //baris bawah mendatar
  for(kol=k2-1;kol>=k1+1;kol--)
  {
    mvprintw(b2,kol,"%c",horizontal);
    //getch();
  }
  mvprintw(b2,k1,"%c",pojok); 
  
  //kolom kiri ke atas
  for(bar=b2-1;bar>=b1+1;bar--)
  {
    mvprintw(bar,k1,"%c",vertikal);
    //getch();
  }
} 

int main(){
    
    //mengawali layar untuk ncurses
  initscr();
  
  //membersihkan layar
  clear();
  
  kotak(5,20,10,35);
  kotak(15,40,20,70);
  kotak (22,25,30,45);
    
  getch();
    
  endwin();
  
  return 11;
  
}
