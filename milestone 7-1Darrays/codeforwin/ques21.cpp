#include<iostream>
using namespace std;
void rotatebyone(int a[],int size){
    int i,temp=a[0];
    for(i=0;i<size-1;i++){
        a[i]=a[i+1];
    }
    a[size-1]=temp;
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
    cout<<"enter the number of times you want to rotate left:";
    cin>>r;
    for(i=1;i<=r;i++){
        rotatebyone(a,size);
    }
    cout<<" elements in array after rotating  elements left are ";
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}