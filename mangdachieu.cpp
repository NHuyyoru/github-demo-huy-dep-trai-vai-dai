#include <iostream>

using namespace std;

int main(){
    /* Khai bao mang da chieu
       <kieu du lieu> <ten mang>[<so phan tu cua chieu 1>][<so phan tu chieu 2>]....
    */
   int arr[3][4];
   /* truy xuat mang da chieu
        <ten mang>[<index chieu 1>][<index 2>]...[index n];
        */
    
    cout << "nhap gia tri cho mang: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    cout << "gia tri cua mang sau khi nhap:" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}