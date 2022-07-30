#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t],i,ch[t],j,found=0;
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    ch[0]=a[0];
    for(i=1;i<t;i++){
        ch[i]=ch[i-1]+a[i];
    }
    int q;
    cin>>q;
    int b[q];
    for(i=0;i<q;i++){
        cin>>b[i];
        found=0;
       for(j=0;j<t;j++){
           if(ch[j]>=b[i]){
               cout<<j+1<<endl;
               found=1;
               break;
           }
       } 
       if(found==0){
           cout<<"-1"<<endl;
       }
    }
    
    
   
    return 0;
}