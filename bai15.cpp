#include <iostream>

using namespace std;

int main(){
    int giai_thua = 1,i = 1, n;
    cout << "n =";
    cin >> n;
    if((n - 5) < 0){
        cout << "(n - 5) khong co giai thua" << endl;
    }
    else if((n - 5) == 0){
        giai_thua = 1;
        cout << "(n - 5)! = " << giai_thua << endl;
    }
    else {
        for(i = 1; i <= n; i++){
            giai_thua *= i;
        }
    }
    cout << "(n - 5) = " << giai_thua << endl;
}