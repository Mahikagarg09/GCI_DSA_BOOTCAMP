//PROGRAM TO CHECK WHETHER A  NUMBER IS STRONG OR NOT
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,fact,dig,temp,i;
    cin>>n;
    temp=n;
    while(n>0){
        dig=n%10;
        fact=1;
        for(i=2;i<=dig;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp){
        cout<<temp<<" is a strong no."<<endl;
    }else{
        cout<<temp<<" is not a strong no."<<endl;
    }
    return 0;
}