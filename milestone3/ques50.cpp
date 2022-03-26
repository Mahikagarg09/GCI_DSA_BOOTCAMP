//HEXADECIMAL TO DECIMAL NUMBER SYSTEM
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    char hex[17];
    long long decimal=0,place=1;
    int i=0,val,len;
    cin>>hex;
    len=strlen(hex);
    len--;
    for(i=0;hex[i]!='\0';i++){
        if(hex[i]>='0' && hex[i]<='9'){
            val=hex[i]-48;
        }else if(hex[i]>='a' && hex[i]<='f'){
            val=hex[i]-97+10;
        }else if(hex[i]>='A' && hex[i]<='F'){
            val=hex[i]-65+10;
        }
        decimal+=val*pow(16,len);
        len--;
    }
    cout<<"hexadecimal no. = "<<hex<<endl;
    cout<<"decimal no. = "<<decimal<<endl;
    return 0;
}