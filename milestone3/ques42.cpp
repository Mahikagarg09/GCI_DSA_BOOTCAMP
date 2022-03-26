//OCTAL TO BINARY SYSTEM
#include<iostream>
using namespace std;
int main(){
    int octalConstant[] = {0, 1, 10, 11, 100, 101, 110, 111},dig;
    long long binary=0, octal, temp,place=1;
    cin>>octal;
    temp=octal;
    while(temp!=0){
        dig=temp%10;
        binary+=octalConstant[dig]*place;
        temp=temp/10;
        place=place*1000;
    }
    cout<<"octal no. = "<<octal<<endl;
    cout<<"binary no. = "<<binary<<endl;
    return 0;
}