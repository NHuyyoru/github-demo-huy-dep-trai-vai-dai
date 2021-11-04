#include <iostream>

using namespace std; 
int main()
{

int i;
float tienlai,tiengui,laisuat,thoihan;
for(i=1;i>=0;i--)
{
cout << "Nhap tien gui ban dau, lai suat va thoi han : " << endl;
cin>>tiengui>>laisuat>>thoihan;
tienlai=(tiengui*laisuat*thoihan)/100;
cout << "Tien gui ban dau = " << tiengui << endl;
cout << "Lai suat = " << laisuat << "%" << endl;
cout << "Thoi han = " << thoihan << " thang" << endl;
cout << "So tien lai = " << tienlai << endl;
}
return 0;
}