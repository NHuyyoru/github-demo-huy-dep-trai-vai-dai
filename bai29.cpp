#include <iostream>

using namespace std;
int main(){
    int e[2000],n,max,min;
    cout<<"Nhap so cac phan tu: ";
    cin >> n;
    cout << "nhap gia tri phan tu: ";
    for(int i=0;i<n;i++){
        cin >> e[i];
        min = e[0];
        max = e[0];
    }
    for(int i=0;i<n;i++){
        if(min > e[i])
        min = e[i];
     
    }
    for(int i=0;i<n;i++){
        if(max < e[i])
        max = e[i];
       
    }
     cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    return 0;
}