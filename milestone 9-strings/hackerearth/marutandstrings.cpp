#include <iostream>

using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    if(t<1 || t>10){
        cout<<"Invalid Input"<<endl;
    }else{
        while(t--){
            string str;
            cin>>str;
            int k=str.length();
            if(k<1 || k>100){
                cout<<"Invalid Input"<<endl;
            }else{
                int countlowcase=0,countuppercase=0,special=0,i;
                for(i=0;i<k;i++){
                    if(str[i]>='a' && str[i]<='z'){
                        countlowcase++;
                    }else if(str[i]>='A' && str[i]<='Z'){
                        countuppercase++;
                    }else{
                        special++;
                    }
                }
                if(special!=0 &&(countuppercase==0) &&(countlowcase==0)){
                    cout<<"Invalid Input"<<endl;
                }else if(special!=0){
                    cout<<"0"<<endl;
                }else{
                    countlowcase>countuppercase ? cout<<countuppercase<<endl : cout<<countlowcase<<endl;
                }
                
            }
        }
        
    }
    return 0;
}
