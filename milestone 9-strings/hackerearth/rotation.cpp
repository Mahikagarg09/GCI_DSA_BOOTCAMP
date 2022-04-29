#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,i,count=0,temp;
    cin>>n;
    string str1 , str2;
    cin>>str1>>str2;
    while(str1!=str2){
        temp=str2[0];
        for(i=0;i<=n;i++){
           str2[i]=str2[i+1];
        }
        str2[n-1]=temp;
        count++;
    }
    count<=n/2 ? cout<<count<<endl : cout<<n-count<<endl;
    
}