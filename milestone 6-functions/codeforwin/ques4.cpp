#include<iostream>

using namespace std;
int check(int r){
    r%2==0 ? cout<<r<<" is even"<<endl : cout<<r<<"is odd"<<endl;
}
int main(){
    int x;
    cin>>x;
    check(x);
    return 0;
}