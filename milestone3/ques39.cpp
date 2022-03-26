//CONVERT BINARY TO OCTAL SYSTEM
#include<iostream>
using namespace std;
int main(){
    int octalConstant[] = {0, 1, 10, 11, 100, 101, 110, 111};
    int binary, octal, temp;
    int digit, place, i;
    octal = 0;
    place= 1;
    cin>>binary;
    temp=binary;
    while(temp!=0){
        digit=temp%1000;
        for(i=0;i<8;i++){
            if(digit==octalConstant[i]){
                octal=octal+i*place;
            }
        }
        temp=temp/1000;
        place=place*10;
    }
    cout<<"binary no. = "<<binary<<endl;
    cout<<"octal no. = "<<octal<<endl;
    return 0;
}