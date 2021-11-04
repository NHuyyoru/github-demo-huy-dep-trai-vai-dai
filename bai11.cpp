#include <iostream>

using namespace std;

int main(){

int d;
int e;
int f;
int thuong;
int vuong;

cout<<"nhap d : "<<endl;
cin>>d;
cout<<"nhap e : "<<endl;
cin>>e;
cout<<"nhap f : "<<endl;
cin>>f;

if( d<e+f && e<d+f && f<d+e ){
  if( d*d==e*e+f*f || e*e==d*d+f*f || f*f== d*d+e*e)
            cout<<"tam giac vuong"<<endl;
    else if(d==e && e==f)
            cout<<"tam giac deu"<<endl;
      else if(d==e || d==f || e==f)
            cout<<"tam giac can"<<endl;
        else if(d*d > e*e+f*f || e*e > d*d+f*f || f*f > d*d+e*e)    
            cout<<"tam giac tu"<<endl;
  else
            cout<<"tam giac nhon"<<endl;
    }
else
        cout<<"3 canh khong tao nen tam giac"<<endl;
}