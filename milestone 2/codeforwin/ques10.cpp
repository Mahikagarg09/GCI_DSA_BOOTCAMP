//count number of digits in a number
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n>0){
       count+=1;
       n=n/10;
    }
    cout<<"no. of digits = "<<count<<endl;
    return 0;
}