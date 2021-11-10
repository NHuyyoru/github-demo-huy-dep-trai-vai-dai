#include <iostream>
using namespace std;

int main() {
    int test[3][2] = {{2, -5},
                      {4, 0},
                      {9, 1}};

    
// sử dụng vòng lặp lồng nhau
    // truy cập các hàng của mảng
    for (int i = 0; i < 3; ++i) {

        // truy cập các cột của mảng
        for (int j = 0; j < 2; ++j) {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }

    return 0;
}

