#include<iostream>
using namespace std;
int perfect(int n){
    int sum=0,i,flag=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        flag=1;
    }
    return flag;
}
int main(){
    int s;
    for(int i=1;i<=1000;i++){
        s=perfect(i);
        if(s==1){
            cout<<i<<endl;
        }
    }
    return 0;
}