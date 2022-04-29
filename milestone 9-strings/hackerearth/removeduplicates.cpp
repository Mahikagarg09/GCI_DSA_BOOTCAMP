#include <iostream>

using namespace std;

int main()
{
    string str1,str2="";
    cin>>str1;
    int i,j;
    for(i=0;i<str1.length();i++){
        if(str2.find(str1[i])==-1){
            str2+=str1[i];
        }
    }
    cout<<str2;

    return 0;
}