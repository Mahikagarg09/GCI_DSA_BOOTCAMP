//OCTAL TO HEXADECIMAL NUMBER SYSTEM
#include<iostream>
#include<string.h>
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
    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long  temp2;
    char hex[20];
    int index, i, dig2;
    temp2 = binary;
    index = 0;
    while(temp2!=0){
        dig2=temp2%10000;
        for(i=0;i<16;i++){
            if(dig2==hexConstant[i]){
                if(i<10){
                   hex[index] = (char)(i + 48);
                }else{
                    hex[index] = (char)((i-10) + 65);
                }
                index++;
                break;
            }
            
        }
        temp2/=10000;
    }
    hex[index]='\0';
    strrev(hex);
    

    cout<<"hexadecimal no. = "<<hex<<endl;
    return 0;
}