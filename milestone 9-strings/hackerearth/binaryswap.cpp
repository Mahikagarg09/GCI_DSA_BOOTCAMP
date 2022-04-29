#include <iostream>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int len=str1.length();
    int i=0,count=0,countzeroa=0,countonea=0,countoneb=0,countzerob=0;
    for(i=0;i<len;i++){
        str1[i]=='0' ? countzeroa++ : countonea++;
        str2[i]=='0' ? countzerob++ : countoneb++;
    }
    if(countzerob!=countzeroa || countoneb!=countonea){
        cout<<"-1"<<endl;
    }else{
        for(i=0;i<len;i++){
            if(str1[i]!=str2[i]){
                count++;
            }
        }
        if(count%2==0){
            cout<<count/2<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    
    
}
