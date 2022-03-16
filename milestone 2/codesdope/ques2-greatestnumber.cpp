//Take two int values from user and print greatest among them
#include<iostream>
using namespace std;
int main(){
    int n1,n2,max=0;
    cin>>n1>>n2;
    if(n1>n2){
       cout<<n1<<" is greatest number"<<endl;
    }else{
        cout<<n2<<" is greatest number"<<endl;
    }
    
    return 0;
}