#include<iostream>
using namespace std;
int main(){
    int n,i,j=0,a[10],b[10];
    cout<<"enter 10 elements:"<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"printing array elements n copied array in reverse order:"<<endl;
    for( i=9;i>=0;i--){
        b[i]=a[j];
        j++;
    }
    for(i=0;i<10;i++){
        cout<<b[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}