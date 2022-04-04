#include<iostream>
using namespace std;
int main(){
    int n,i,a[5],min,max=0;
    cout<<"enter 5 elements:"<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"max = "<<max<<endl;
    cout<<"min = "<<min<<endl;
    cout<<endl;
    return 0;
}