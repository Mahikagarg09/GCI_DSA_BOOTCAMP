#include<iostream>
using namespace std;
int main(){
    int n1,n2,max=0;
    cin>>n1>>n2;
    n1>n2 ? max=n1 : max=n2;
    cout<<"max of "<<n1<<" and "<<n2<<" is "<<max<<endl;
    
    return 0;
}