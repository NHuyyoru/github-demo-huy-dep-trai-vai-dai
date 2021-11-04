#include <iostream>

using namespace std;

int main(){
    float diem[10],tong,tb;
    //Nhap gia tri cho 10 pt
    cout << "Nhap gia tri cho cac phan tu" << endl;
    for(int i =0;i < 10; i++){
        cout << "diem[" << i << "] =";
        cin >> diem[i];
    }
    cout << "Gia tri cac phan tu cua mang sau khi nhap:" << endl;
    for(int i = 0; i < 10; i++){
        cout << "diem[" << i << "] =" << diem << endl;
    }
    //
        cout << "Diem trung binh cua 10 sinh vien la:";
        for(int i = 0; i < 10; i++){
            tong += diem[i];
    }
    tb = tong / 10;
    cout << tb << endl;
    return 0;
}