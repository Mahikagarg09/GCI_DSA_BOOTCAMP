#include<iostream>
using namespace std;
int search(int a[],int size,int n){
    int low=0,high=size-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(n==a[mid]){
            return mid;
        }else if(n<a[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,i,size,find,pos;
    cout<<"enter the number of elements you want in array:";
    cin>>size;
    int a[size];
    cout<<"enter "<<size<<" sorted elements either ascending or descending:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"enter the element you want to search:";
    cin>>find;
    pos=search(a,size,find);
    if(pos>=0){
        cout<<find<<" is found at index "<<pos+1<<endl;
    }else{
        cout<<find<<" is not found in array"<<endl;
    }
    
    return 0;
}