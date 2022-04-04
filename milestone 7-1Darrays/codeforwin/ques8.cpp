#include<iostream>
using namespace std;
int main(){
    int n,i,size;
    cout<<"enter the number of elemnts you want in array:";
    cin>>size;
    int a [size],b[size];
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    cout<<"printing array elements copied in another array:"<<endl;
    for(i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}