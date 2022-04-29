#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str1,str2="";
        cin>>str1;
        int i,k;
        k=str1.length();
        for(i=k-2;i>=0;i-=2){
            str2+=str1[i];
        }
        if(k%2==1){
            for(i=0;i<k;i+=2){
               str2+=str1[i];
            }
        }else{
            for(i=1;i<k;i+=2){
               str2+=str1[i];
            }
        }
        cout<<str2<<endl;;
    }

    return 0;
}
