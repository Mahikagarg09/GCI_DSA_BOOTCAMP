#include<bits/stdc++.h>

using namespace std;
void output(string s){
    string temp="",straight="",reverse="";
    int i,n=s.length();
    for(i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='u' || s[i]=='o'){
                temp+=s[i];
        }
    }
    straight+=temp;
    reverse+=temp;
    sort(straight.begin(), straight.end());
    sort(reverse.begin(), reverse.end(), greater<char>());
    if(temp==straight){
        cout<<"Good\n";
    }else if(temp==reverse){
        cout<<"Worst\n";
    }else{
        cout<<"Bad\n";
    }
}


int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        output(s);
    }
}