#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c,n;
    int giai_thua,kq;
    float x1,x2,delta;
    do{
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
        cout << "1. tinh a!" << endl;
        cout << "2. " << endl;
        cout << "3. " << endl;
        cout << "4. " << endl;
        cout << "5. Thoat" << endl;
        cout << "chon: ";
        cin >> n;
        switch (n)
        {
            case 1:
                giai_thua = 1;
                if(a < 0){
                    cout << "khong co a!" << endl;
                }
                else if(a == 0){
                    giai_thua = 1;
                    cout << "a! = " << giai_thua << endl;
                }
                for(int i = 1; i <= a; i++){
                    giai_thua *= i;
                    cout << "a! = " << giai_thua << endl;
                }
                break;
            case 2:
                kq = pow(a,2) - pow(b,3) + pow(c,5);
                cout << "kq = " << kq << endl;
                break;
            case 3:
                if(a == 0){
                    if(b == 0){
                        if(c == 0){
                            
                        }
                    }
                }
            default:
                break;
        }
    }while(n != 5);
    return 0;
}