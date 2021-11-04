#include <iostream>
#include <math.h>

using namespace std;

float tinha(float p,float r,int n){
    return p * pow((1 + r/100),n);
}
int main(){
    float p,r;
    int n;
    printf("Nhap tien von, lai suat, so thang: ");
    scanf("%f,%f,%d",&p,&r,&n);
    printf("Thang\t Von\n");
    for(int i=1;i<=n;i++){
        printf("%d\t%g\n",i,tinha(p,r,i));
    }
    return 0;
}