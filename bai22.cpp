#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "n = ";
	cin >> n;
	int i = 3;
	if(n < 2){
		cout << "n khong la so nguyen to" << endl;
	}
	else if(n == 2){
		cout << "n la so nguyen to" << endl;
	}
	else {
		if(n % 2 == 0){
			cout << "n khong la so nguyen to" << endl;
		}
		else{
			for(i=3;i<n;i+=2){
				if(n % i == 0){
					cout << "n khong la so nguyen to" << endl;
				}
				else{
					cout << "n la so nguyen to" << endl;
				}
			}
		}
  }
}
