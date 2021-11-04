#include <iostream>

using namespace std;

int main(){
int g;
int h;
int tong_3=0;
cout<<"Nhap h : ";
cin>>h;
for (g=1;g<=h;g++){
  if(g%3==0){
    tong_3 += g;
  }
    cout<<"Tong chia het cho 3 : "<<tong_3<<endl;

}
}