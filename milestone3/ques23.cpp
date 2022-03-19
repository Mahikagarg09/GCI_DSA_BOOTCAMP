//find factorial of a number
#include<iostream>
using namespace std;
int main(){
    int n,fact=1,i;
    cin>>n;
    for(i=2;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial = "<<fact<<endl;
    return 0;
}