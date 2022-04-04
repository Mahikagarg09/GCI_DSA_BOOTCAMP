#include<iostream>
using namespace std;

int main(){
    int n,i,size1,size2,size3,j=0;
    cout<<"enter the number of elements you want in first array:";
    cin>>size1;
    int a[size1];
    cout<<"enter "<<size1<<" elements:"<<endl;
    for(i=0;i<size1;i++){
        cin>>a[i];
    }
    cout<<"enter the number of elements you want in second array:";
    cin>>size2;
    int b[size2];
    cout<<"enter "<<size2<<" elements:"<<endl;
    for(i=0;i<size2;i++){
        cin>>b[i];
    }
    size3=size1+size2;
    int c[size3];
    for(i=0;i<size1;i++){
        c[j]=a[i];
        j++;
    }
    for(i=0;i<size2;i++){
        c[j]=b[i];
        j++;
    }
    
    cout<<" elements in array after merging elements are ";
    for(i=0;i<size3;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}