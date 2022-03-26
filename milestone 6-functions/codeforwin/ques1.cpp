#include<iostream>
#include<math.h>
using namespace std;
int cube(int r){
    return pow(r,3);
}
int main(){
    int x;
    cin>>x;
    cout<<x<<"^3 = "<<cube(x)<<endl;
    return 0;
}