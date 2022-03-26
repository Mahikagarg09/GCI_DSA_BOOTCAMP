//DECIMAL TO OCTAL  NUMBER SYSTEM
#include<iostream>
using namespace std;
int main(){
    long long decimal,temp,octal=0;
    int place=1,rem;
    cin>>decimal;
    temp=decimal;
    while(temp>0){
        rem=temp%8;
        octal+=rem*place;
        place*=10;
        temp/=8;
    }
    cout<<"decimal no. = "<<decimal<<endl;
    cout<<"octal no. = "<<octal<<endl;
    return 0;
}