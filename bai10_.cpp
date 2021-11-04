#include <iostream>

using namespace std;

int main(){
    int a;
    int tong = 0;
    int i = 1;
    cout << " nhap a :";
    cin >> a;
    for(i=1;i<a;i++){
        tong += i;
    }
    cout << " tong = " << tong << endl;
}