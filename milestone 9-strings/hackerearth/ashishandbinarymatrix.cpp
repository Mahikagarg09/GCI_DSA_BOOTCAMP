#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        map<string,int>mp;
        string s;
        for(int i=0;i<n;i++){
            
            cin>>s;
            mp[s]++;
        }
        mp.size()==n ? cout<<"Yes\n" : cout<<"No\n";
    }
    

    return 0;
}