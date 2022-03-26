#include<iostream>
#include<math.h>
using namespace std;
void astr(int n1,int n2){
    int i,temp1,temp2,last,sum=0,digits=0;
    for(i=n1;i<=n2;i++){
    
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
}
int main(){
    int x,y;
    cout<<"lower limit=";
    cin>>x;
    cout<<"upper limit=";
    cin>>y;
    astr(x,y);
    return 0;
}