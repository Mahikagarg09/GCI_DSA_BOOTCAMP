//PROGRAM TO PRINT ALL ARMSTRONG NUMBERS 1 TO N
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i,temp1,temp2,last,sum=0,digits=0;;
    cin>>n;
    for(i=1;i<=n;i++){
    
       temp1=i;
       temp2=i;
       while(temp1>0){
          digits+=1;
          temp1=temp1/10;
       }
       while(temp2>0){
           last=temp2%10;
           sum=sum+round(pow(last,digits));
           temp2=temp2/10;
        }
        if(sum==i){
            cout<<i<<" ";
        }
        digits=0;
        sum=0;
    }
    return 0;
}