#include<iostream>
using namespace std;
void prime(int n1,int n2){
    int  i,flag,j,sum=0;
    if(n1==1){
        i=2;
    }else{
        i=n1;
    }
    for(i;i<=n2;i++){
        flag=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                
            }
        }
        if(flag==0){
            cout<<i<<" ";
        
        } 
    }
}
int main(){
    int x,y;
    cout<<"lower limit=";
    cin>>x;
    cout<<"upper limit=";
    cin>>y;
    prime(x,y);
    return 0;
}