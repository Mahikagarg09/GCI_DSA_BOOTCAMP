#include<iostream>
using namespace std;
int main(){
    int n,i,a[10];
    cout<<"enter 10 elements:"<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"printing array elements:"<<endl;
    for(i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}