#include<iostream>
using namespace std;
int main(){
    int n,i,a[5],sum=0,pro=1;
    cout<<"enter 5 elements:"<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
        sum+=a[i];
        pro*=a[i];
    }
    cout<<"sum of elements= "<<sum<<endl;
    cout<<"product of elements = "<<pro<<endl;
    cout<<endl;
    return 0;
}