//DECIMAL TO BINARY NUMBER SYSTEM
#include<iostream>
using namespace std;
int main(){
    long long decimal,temp,binary=0;
    int place=1,rem;
    cin>>decimal;
    temp=decimal;
    while(temp>0){
        rem=temp%2;
        binary+=rem*place;
        place*=10;
        temp/=2;
    }
    cout<<"decimal no. = "<<decimal<<endl;
    cout<<"binary no. = "<<binary<<endl;
    return 0;
}