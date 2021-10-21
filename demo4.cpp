#include <iostream>

using namespace std;

int main(){
    int a;
    //hien thi "a = "
    cout << "a = ";
    //nhap a
    cin >> a;
    //kiem tra a % 5 == 0?
    if(a % 5 == 0){
        a += 10;
    }
    else {
        a -= 10;
    }
    cout << "a: " << a << endl;
}