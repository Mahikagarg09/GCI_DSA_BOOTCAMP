#include <iostream>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int flag=0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='/' && s[i+1]=='/'){
                flag=1;
            }
            if(flag==0){
                if(s[i]=='-' && s[i+1]=='>'){
                    cout<<'.';
                    i++;
                }else{
                    cout<<s[i];
                }
            }else{
                cout<<s[i];
            }
        }
        cout<<"\n";
    }    
    return 0;
}