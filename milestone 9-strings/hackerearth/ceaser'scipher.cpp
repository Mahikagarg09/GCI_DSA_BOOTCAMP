#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int flag=0,ans=1,diff=0,i;
        for(i=0;i<s1.length();i++){
            diff = (s2[i] - s1[i] + 26) % 26;
            if(ans==1){
                ans=diff;
            }else if(diff==ans){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<ans<<endl;
        }else{
            cout<<"-1\n";
        }
    }

    return 0;
}