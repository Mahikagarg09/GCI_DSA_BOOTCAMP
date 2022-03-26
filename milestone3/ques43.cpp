//OCTAL TO DECIMAL NUMBER SYSYTEM
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long octal,temp,decimal=0;
    int n=0,dig;
    cin>>octal;
    temp=octal;
    while(temp!=0){
        dig=temp%10;
        decimal+=(pow(8,n))*dig;
        n++;
        temp=temp/10;
    }
    cout<<"octal no. = "<<octal<<endl;
    cout<<"decimal no. = "<<decimal<<endl;
    return 0;
}