//PROGRAM TO PRINT STRONG NUMBERS 1 TO N
#include<iostream>
using namespace std;
int main(){
    int end,sum,fact,dig,temp,i,n;
    cin>>end;
    for(n=1;n<=end;n++){
        sum=0;
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
            cout<<n<<"  ";
        }
    }
    return 0;
}