#include<iostream>
using namespace std;
int add(int n1, int n2){
    return n1+n2;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<x<<" + "<<y<<" = "<<add(x,y)<<endl;;
    return 0;
}