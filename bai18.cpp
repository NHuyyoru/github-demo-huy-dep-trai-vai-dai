#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    int n;
    cout << "Nhap a,b,c: " << endl;
    cin >> a,b,c;
    cout << "Nhap n: " << endl;
    cin >> n;
    do{
        printf("----------MENU----------\n");
		printf("1. Tinh a!\n");
		printf("2. Tinh a^2 - b^3 + c^5\n");
		printf("3. Tinh nghiem phuong trinh a * x^2 + b*x +c = 0\n");
        printf("4. Kiem tra a,b,c có là cạnh tam giác hay không\n");
		printf("5. Thoát \n");
		printf("Chon menu nào bạn hiền ei: ");
		scanf("%d", &chon);
        switch(chon){
            case 1:
                printf(" Tinh a!");
            break;
            case 2:
                printf(" Tinh a^2 - b^3 + c^5 ");
            break;
            case 3:
                printf(" Tinh nghiem phuong trinh a * x^2 + b*x +c = 0 ");
            break;
            case 4:
                printf(" Kiem tra a,b,c có là cạnh tam giác hay không ");
            break;
            case 5:
                printf(" Thoát ");
            break;
        }
    }
    if(n == )

}