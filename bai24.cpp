#include <iostream>
using namespace std;

int main(){
  int h;
  int i;
  int j;
  cout << "nhap so hang h: ";
  cin >> h;
  for(i = 0; i < h; i++)
  {
    for(j = h;j >= i;j--){
      cout<<j;
    }
    cout<<endl;
  }
  return 0;
}
