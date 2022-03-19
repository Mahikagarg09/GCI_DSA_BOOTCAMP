 //PROGRAM TO CALCULATE POWER OF A NUMBER
#include<iostream>
using namespace std;
int main(){
    int base,exp,i,ans=1;
    cin>>base>>exp;
    for(i=0;i<exp;i++){
        ans=ans*base;
    }
    cout<<base<<" raised to power "<<exp<<" is "<<ans<<endl;
    return 0;
}