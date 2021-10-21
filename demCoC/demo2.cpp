#include <iostream>

using namespace std;

int main()
{
     int a;
     //hien thi "a = "
     cout << "a = ";
     //nhap a
     cin >> a;
     //kiem tra a >= 0?
     if(a >= 0)
     if(a % 2 == 0){
          cout << a << " la so chan" << endl;
          }
     else {
          cout << a << " la so le" << endl;
     }
     else {
          cout << a << " la so am" << endl;
     }
}
  