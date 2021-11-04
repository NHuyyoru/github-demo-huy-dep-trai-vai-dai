#include <iostream>

using namespace std;

int main(){
    int giai_thua = 1,i = 1,n;
    float kq;
    do{
    cout << "n = ";
    cin >> n;
}while(n % 3 != 0);
    if((n - 3) < 0){
        cout << "n khong co giai thua" << endl;
        cout << "khong tinh duoc ket qua" << endl;
    }
    else if((n - 3) == 0){
        giai_thua = 1;
        kq = (float)giai_thua / 2;
        cout << "ket qua: " << kq << endl;
    }
    else {
        for(i = 1; i <= n - 3; i++){
            giai_thua *= i;
        }
    kq = (float)giai_thua / 2;
    cout << "ket qua: " << kq << endl;
    }
}