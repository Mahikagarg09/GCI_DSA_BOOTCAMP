#include <iostream>
using namespace std;
int samestr(string s){
    int n=s.length(),flag=0;
    for(int i=0; i<n; i++){
       if(s[0] != s[i])
        flag=1;
        break;
    }
    return flag;
}
int main()
{
    string str;
    cin>>str;
    int i,flag=1,n=str.length();
    for(i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<n<<endl;
    }else{
        if(samestr(str)==0){
            cout<<"0"<<endl;
        }else{
            cout<<n-1<<endl;
        }
    }    
    return 0;
}