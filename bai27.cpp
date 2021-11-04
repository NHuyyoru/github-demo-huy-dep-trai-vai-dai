#include <iostream>

using namespace std;
int main(){
   int a[5];
   int i,n;
    cout << "Nhap vao so phan tu: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : " << endl;
        cin >> a[i];
    }
    cout << "phan tu chia het cho 2 la: ";
    for(i = 0;i < 5;i++){
        if(a[i]%2==0){
            cout << a[i] << endl;
        }
        else if(a[i]%2==0){
            cout << "khong co phan tu chia het cho 2" << a[i] << endl;
        }
    }
        return 0;
 }