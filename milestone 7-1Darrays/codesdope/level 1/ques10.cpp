#include<iostream>
using namespace std;
int bubble(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int i,size,j;
    cout<<"enter the no. of elements you want in array:";
    cin>>size;
    int a[size];
    cout<<"enter "<<size<<" elements:";
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    bubble(a,size);
    cout<<"pair having minimum difference:"<<a[0]<<" and "<<a[1]<<endl;
    cout<<"pair having maximum difference:"<<a[0]<<" and "<<a[size-1]<<endl;
    return 0;
}