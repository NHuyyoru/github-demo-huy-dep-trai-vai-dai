#include <iostream>

using namespace std;

int main(){
  // Khai bao bien so gio lam, Luong
   int thang,nam;
   //hien thi "so gio lam = "
   cout << "thang: ";
   //nhap a
   cin >> thang;
   //kiem tra thang?
   cout << "nam: ";
   cin >> nam;
   switch (thang)
   {
       case 1:
       /* code */
       cout << "thang " << thang << " co 31 ngay" << endl;
       break;
       case 2:
       if((nam % 4 == 0 && nam % 100 == 0) || (nam % 4 == 0 && nam % 100 != 0 )){
          cout << "thang " << thang << endl;
       }
       
       break;
       case 3:
       cout << "thang " << thang << " co 31 ngay" << endl;
       break;
       case 4:
       cout << "thang " << thang << " co 30 ngay" << endl;
       break;
       case 5:
       cout << "thang " << thang << " co 31 ngay" << endl;
       break;
       case 6:
       cout << "thang " << thang << " co 30 ngay" << endl;
       break;
       case 7:
       cout << "thang " << thang << " co 31 ngay" << endl;
       break;
       case 8:
       cout << "thang " << thang << " co 31 ngay" << endl;
       break;
       case 9:
       cout << "thang " << thang << " co 30 ngay" << endl;
       break;
       case 10:
       cout << "thang " << thang << " co 31 ngay" << endl;
       break;
       case 11:
       cout << "thang " << thang << " co 30 ngay" << endl;
       break;
       case 12:
       cout << "thang " << thang << " co 31 ngay" << endl;
       break;
       default:
       cout << "nhap sai " << endl;
       break;
   }
}
  