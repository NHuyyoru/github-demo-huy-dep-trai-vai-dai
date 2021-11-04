#include <iostream>

using namespace std;
int main(){
    int n,max,min;
    int arr[n];
    cout << "nhap n:";
    cin >> n;
    cout << "nhap mang: " << endl;
    for(int i=0;i<n;i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << "max = ";
    max = arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << max << endl;
    cout << "min = ";
    min = arr[0];
    for(int i=0;i>n;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << min << endl;
    return 0;
}