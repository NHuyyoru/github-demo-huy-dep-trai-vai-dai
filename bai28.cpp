#include <iostream>

using namespace std;
int main2(){
    float a[10];
    int i,tong;

    cout << "Nhap 10 so thua bat ki : " << endl;
    for(i=0;i<10;++i) {
      cin >> a[i];
    }
    cout << "Tong nhung phan nguyen khong chia het cho 2 la : ";
    for(i=0;i<10;i++){
      if((int)a[i]%2 !=0)
      tong += a[i];
    }
    cout << "tong cac so co pha nguyen khong chia het 2 = " << tong << endl;
    return 0;
}
    
    
    