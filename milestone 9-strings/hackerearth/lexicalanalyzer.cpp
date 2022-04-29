#include <iostream>

using namespace std;

int main()
{
    int t,i,count=0;;
    cin>>t;
    string str1,str2="";
    while(t--){
        string str3="";
        cin>>str1;
        int k,m;
        for(i=0;i<str1.length();i++){
            if(str1[i]=='='){
                k=i;
            }
        }
        str3=str1.substr(0,k);
        m=str2.find(str3);
        if(m==-1){
            str2+=str3;
            count++;
        }
    
    }
    cout<<count<<endl;
        
    
    return 0;
}
