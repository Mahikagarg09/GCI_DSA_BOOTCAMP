#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str1;
        cin>>str1;
        int i,n=str1.length(),j;
        long long int pro=1;
        unordered_map<char,int>freq;
        for(i=0;i<n;i++){
            freq[str1[i]]++;
        }
        for(auto& x : freq){
            pro=pro*x.second;
            pro=pro%mod;
        }
        cout<<pro<<endl;
    }

    return 0;
}
