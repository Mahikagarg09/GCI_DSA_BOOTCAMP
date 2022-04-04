#include<iostream>
using namespace std;
int main(){
    int n,i,size,p=0;
    cout<<"enter the number of elemnts you want in array:";
    cin>>size;
    int a [size];
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"counting negative array elements:"<<endl;
    for(i=0;i<size;i++){
        if(a[i]<0){
            p+=1;
        }
    }
    cout<<p<<endl;
    return 0;
}