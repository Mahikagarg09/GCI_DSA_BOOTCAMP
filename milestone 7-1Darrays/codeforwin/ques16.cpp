#include<iostream>
using namespace std;

int main(){
    int n,i,size,j=0;
    cout<<"enter the number of elements you want in  array:";
    cin>>size;
    int a[size];
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"elements in array in reverse order are ";
    for(i=size-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}