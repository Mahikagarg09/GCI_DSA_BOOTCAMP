#include<iostream>
using namespace std;
int main(){
    int n,i,max=0,min;
    int a [5]={3,1,2,6,7};
    min=a[0];
    cout<<"printing array elements:"<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<" ";
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<endl<<"max = "<<max<<endl<<"min = "<<min;
    cout<<endl;
    return 0;
}