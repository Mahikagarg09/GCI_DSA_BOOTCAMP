#include<iostream>
using namespace std;
int main(){
    int n,i,j=0,a[10],b[5],c[5];
    cout<<"enter 10 elements:"<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    for(i=0;i<5;i++){
        b[j]=a[i];
        j++;
    }
    j=0;
    for(i=5;i<10;i++){
        c[j]=a[i];
        j++;
    }
    cout<<"the two arrays are-"<<endl;
    for(i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<5;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}