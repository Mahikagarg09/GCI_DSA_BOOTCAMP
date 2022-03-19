//14.PROGRAM TO CALCULATE SUM AND 
//15.PRODUCT OF DIGITS OF A NUMBER
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,pro=1;
    cin>>n;
    while(n>0){
       sum=sum+(n%10);
       pro=pro*(n%10);
       n=n/10;
    }
    cout<<"sum of digits is="<<sum<<endl;
    cout<<"product of digits is="<<pro<<endl;
    return 0;
}
