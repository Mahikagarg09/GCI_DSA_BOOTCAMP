#include<iostream>

using namespace std;
int factorial(int n){
    int fact=1,i;
    for(i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int x;
    cin>>x;
    cout<<"factorial of "<<x<<" = "<<factorial(x)<<endl;;
    return 0;
}