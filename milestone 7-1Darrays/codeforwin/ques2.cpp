#include<iostream>
using namespace std;
int main(){
    int n,i,size;
    cout<<"enter the number of elemnts you want in array:";
    cin>>size;
    int a [size];
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"printing negative array elements:"<<endl;
    for(i=0;i<size;i++){
        if(a[i]<0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}