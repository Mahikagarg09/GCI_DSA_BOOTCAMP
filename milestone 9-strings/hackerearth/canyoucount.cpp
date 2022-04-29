#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0,e=0,I=0,o=0,u=0;
        long long  pro=1,sum;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a')
            a=1;
            else if(s[i]=='e')
            e=1;
            else if(s[i]=='i')
            I=1;
            else if(s[i]=='o')
            o=1;
            else if(s[i]=='u')
            u=1;
            else if(s[i]=='_'){
                sum=a+e+I+o+u;
                pro=pro*sum;
            }
        }
        cout<<pro<<endl;
    }
}
