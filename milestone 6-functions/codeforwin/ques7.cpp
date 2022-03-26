#include<iostream>
using namespace std;
void strong(int start,int end){
    int sum,fact,dig,temp,i,n;
    for(n=start;n<=end;n++){
        sum=0;
        temp=n;
        while(temp>0){
           dig=temp%10;
           fact=1;
           for(i=2;i<=dig;i++){
               fact=fact*i;
            }
            sum=sum+fact;
            temp=temp/10;
        }
        if(sum==n){
            cout<<n<<"  ";
        }
    }
}
int main(){
    int x,y;
    cout<<"lower limit=";
    cin>>x;
    cout<<"upper limit=";
    cin>>y;
    strong(x,y);
    return 0;
}