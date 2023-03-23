#include <bits/stdc++.h>

using namespace std;

struct date{
  int d,m,y;
  date(int a, int b, int c){
    d = a; m = b; y = c;
  }
};

int lps (date d){
  int y = d.y;
  if (d.m <= 2) y--;
  return y/4 - y/100 + y/400;
}

int main() {
  vector<int> mgn = {0,3,3,6,1,4,6,2,5,0,3,5};
  vector<string> wkDays = {"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
  vector<int> mDays = {31,28,31,30,31,30,31,31,30,31,30,31};
  
  int d,m,y;
  cin >> d >> m >> y;
  date d1(d,m,y);
  date d2(24,3,2023);
  int cVal = 0;
  if (d1.y%400 < 100){
    cVal = 6;
  }
  if (d1.y%400 < 200 && d1.y%400 > 100){
    cVal = 4;
  }
  if (d1.y%400 < 300 && d1.y%400 > 200){
    cVal = 2;
  }
  bool lp = false;
  if (d1.y%4 == 0) lp = true;
  int wkDay1 = (d1.y%100 + (d1.y%100)/4 + d1.d + mgn[d1.m-1] + cVal);
  wkDay1 = wkDay1%7;
  if (lp) wkDay1--;
  cout << wkDays[wkDay1] << endl;

  int n1 = d1.y*365+d1.d;
  for (int i = 0; i < d1.m-1; i++){
    n1 += mDays[i];
  }
  n1 += lps(d1);

  int n2 = d2.y*365+d2.d;
  for (int i = 0; i < d2.m-1; i++){
    n2 += mDays[i];
  }
  n2 += lps(d2);

  cout << "Han pasado " << abs(n2-n1)-1 << " días desde la fecha indicada" << endl; 
}
