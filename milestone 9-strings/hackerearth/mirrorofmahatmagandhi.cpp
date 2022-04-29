#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i,count=0;
        for(i=0;i<s.length();i++){
            if(s[i]=='0'||s[i]=='1'||s[i]=='8'){
               count++;
            }
        }
        string t=s;
        reverse(t.begin(),t.end());
        if(count==s.length() &&s==t){
            cout<<"YES"<<endl;
        }else
            cout<<"NO"<<endl;
        }
   
   return 0;
}