#include<iostream>
using namespace std;
int main(){
    int n,i,j=0,a[5],b[5],flag=0;
    cout<<"enter 5 elements:"<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    for( i=4;i>=0;i--){
        b[i]=a[j];
        j++;
    }
    for(i=0;i<5;i++){
        if(a[i]!=b[i]){
            flag=1;
            break;
        }
    }    
    if(flag==0){
        cout<<"elements of array are same from front and back"<<endl;
    }else{
        cout<<"elements of array are not same from front and back"<<endl;
    }
    
    cout<<endl;
    return 0;
}