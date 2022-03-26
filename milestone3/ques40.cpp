//convert binary to decimal no.system
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int binary,decimal=0,temp,n=0;
    cin>>binary;
    temp=binary;
    while(temp!=0){
        if(temp%10==1){
            decimal=decimal+pow(2,n);
        }
        n++;
        temp=temp/10;
    }
    cout<<"binary no. = "<<binary<<endl;
    cout<<"decimal no. = "<<decimal<<endl;
    return 0;
}