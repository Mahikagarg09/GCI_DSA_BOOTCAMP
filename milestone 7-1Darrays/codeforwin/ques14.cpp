#include<iostream>
using namespace std;

int main(){
    int n,i,size,j,k;
    cout<<"enter the number of elements you want in array:";
    cin>>size;
    int a[size];
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j]){
                for(k=j;k<size;k++){
                    a[k]=a[k+1];
                }
                size--;
            }
        }
    }
    cout<<" elements in array after deleting duplicate elements are ";
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}