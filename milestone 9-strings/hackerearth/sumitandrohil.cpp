#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    map<string,int>mp;
    for(i=0;i<t;i++){
        string s;
        cin>>s;
        sort(s.begin()+1, s.begin()+s.size()-1);
        mp[s]++;
    }
    cout<<mp.size();

    return 0;
}