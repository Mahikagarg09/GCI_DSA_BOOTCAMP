//PROGRAM TO CHECK FOR AN ARMSTRONG NUMBER
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,temp1,sum=0,digits=0,temp2,last;
    cin>>n;
    temp1=temp2=n;
    while(n>0){
        digits+=1;
        n=n/10;
    }
    while(temp1>0){
        last=temp1%10;
        sum=sum+round(pow(last,digits));
        temp1=temp1/10;
    }
    if(sum==temp2){
        cout<<"it is an armstrong no."<<endl;
    }else{
        cout<<" it is not an armstrong no."<<endl;
    }
    return 0;
}