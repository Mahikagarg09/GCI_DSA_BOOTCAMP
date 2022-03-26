//DECIMAL TO HEXADECIMAL NUMBER SYSTEM
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    long long decimal,temp;
    char hex[65],hexcons[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n=0,rem;
    cin>>decimal;
    temp=decimal;
    while(temp>0){
        rem=temp%16;
        hex[n]=hexcons[rem];
        n++;
        temp/=16;
    }
    hex[n]='\0';
    strrev(hex);
    cout<<"decimal no. = "<<decimal<<endl;
    cout<<"hexadecimal no. = "<<hex<<endl;
    return 0;
}