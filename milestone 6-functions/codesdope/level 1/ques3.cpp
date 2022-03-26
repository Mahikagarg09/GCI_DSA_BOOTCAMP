#include<iostream>
#include<math.h>
using namespace std;
int circle(int r){
    cout<<"cirumference of circle="<<2*3.14*r<<endl;
    cout<<"area of circle="<<3.14*pow(r,2)<<endl;
}
int main(){
    int x;
    cin>>x;
    circle(x);
    return 0;
}