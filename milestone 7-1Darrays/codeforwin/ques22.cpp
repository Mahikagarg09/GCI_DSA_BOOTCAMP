#include<iostream>
using namespace std;
void rotatebyone(int a[],int size){
    int i,temp=a[size-1];
    for(i=size-1;i>=0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
}
int main()
{
    int n,i,size,r;
    cout<<"enter the number of elements you want in array:";
    cin>>size;
    int a[size];
    cout<<"enter "<<size<<" elements "<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"enter the number of times you want to rotate right:";
    cin>>r;
    for(i=1;i<=r;i++){
        rotatebyone(a,size);
    }
    cout<<" elements in array after rotating  elements right are ";
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}