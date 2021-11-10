#include <iostream>

using namespace std;


int main()
{
    int A[100];
    int n;
    cout << "Nhap vao so luong phan tu cua mang la: " << endl;
    cin >> n;

    //nhap mang
    for(int i=0; i<n; i++)
    {
        cout << "Nhap phan tu thu A[" << i << "] : " << endl;
        cin >> A[i];
    }

    //xuat mang
    for(int i=0; i<n; i++)
    {
        cout << (float)1/A[i] << endl;
    }
  
return 0;
}