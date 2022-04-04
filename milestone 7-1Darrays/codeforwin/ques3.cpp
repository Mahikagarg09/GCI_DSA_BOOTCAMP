#include<iostream>
using namespace std;
int main(){
    int n,i,size,sum=0;
    cout<<"enter the number of elemnts you want in array:";
    cin>>size;
    int a [size];
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"sum of array elements:"<<endl;
    for(i=0;i<size;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}