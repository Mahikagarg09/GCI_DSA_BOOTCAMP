#include<iostream>
using namespace std;
int fibonacci(int a,int b,int n){
    int c;
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }else{
        for(int i=0;i<n-2;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
int main(){
    int n1,n2,t;
    cout<<"enter first and second term of fibonacci series:";
    cin>>n1>>n2;
    cout<<"which term you want?:";
    cin>>t;
    cout<<"term "<<t<<" is "<<fibonacci(n1,n2,t)<<endl;
    return 0;
}