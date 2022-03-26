#include<iostream>
#include<math.h>
using namespace std;
void prime(int n){
    int prime=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(n==1){
        cout<<"neither prime nor composite"<<endl;
    }else if(prime==0){
        cout<<"the number is composite"<<endl;;
    }else{
        cout<<"the number is prime"<<endl;;
    }
}
void armstrong(int n){
    int temp1,sum=0,digits=0,temp2,last;
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
}
void perfect(int n){
    int sum=0,i;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<n<<" is a perfect number"<<endl;
    }else{
        cout<<n<<" is not a perfect number"<<endl; 
    }
}
int main(){
    int x;
    cin>>x;
    prime(x);
    armstrong(x);
    perfect(x);
    return 0;
}