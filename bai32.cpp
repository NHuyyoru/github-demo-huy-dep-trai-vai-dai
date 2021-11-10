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

    //dao nguoc mang
    for(int i=0; i< n/2; i++)
    {
        int index = n - i - 1;
        int tmp = A[index];
        A[index] = A[i];
        A[i] = tmp;
    }

    //xuat mang
    for(int i=0; i<n; i++)
    {
        cout << A[i] << endl;
    }
  
return 0;
}