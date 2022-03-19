//PROGRAM TO PRINT PERFECT NUMBERS FROM 1 TO N
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
        cout<<i<<" ";
        }
        sum=0;
    }
    return 0;
}