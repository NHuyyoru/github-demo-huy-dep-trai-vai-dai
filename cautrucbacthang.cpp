#include <iostream>

using namespace std;

int main()
{
   // Khai bao bien a
   int a;
   int tong;
   cout << "nhap so gio lam :";
   cin >> a;
 
   if(a < 50){
      tong = a*100000;
      cout << "Luong = " << a*100000 << endl; 
} 
   else if(a < 70){
     tong = a * 110000;
     cout << "Luong = " << a*110000 << endl;
 }
   else if(a < 100){
      tong = a * 120000;
      cout << "Luong = " << a*120000 << endl;
}
   else if(a < 150){
      tong = a * 140000;
     cout << "Luong = " << a*140000 << endl;
}
  else {
     tong = a * 150000;
 }
     cout << "Luong = " << a*150000 << endl;
  cout << "ket thuc" << endl;
}