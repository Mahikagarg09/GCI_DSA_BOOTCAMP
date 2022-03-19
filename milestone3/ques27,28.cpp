//27.PROGRAM TO WRITE PRINT ALL PRIME NOS 1 TO N 
//28.AND FIND THIER SUM
#include<iostream>
using namespace std;
int main(){
    int n,i,flag,j,sum=0;
    cin>>n;
    for(i=2;i<=n;i++){
        flag=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                
            }
        }
        if(flag==0){
            cout<<i<<" ";
            sum=sum+i;
        } 
    }
    cout<<endl<<"sum is "<<sum<<endl;
    return 0;

}