#include<iostream>
using namespace std;
int main(){
    int i,a[20],p=0,n=0,e=0,o=0,zero=0;
    cout<<"enter 10 elements:"<<endl;
    for(i=0;i<20;i++){
        cin>>a[i];
    }
    for(i=0;i<20;i++){
        if(a[i]>0){
           p++;
        }else if(a[i]==0){
            zero++;
        }else{
            n++;
        }
        if(a[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    cout<<"postive numbers = "<<p<<endl;
    cout<<"negative numbers = "<<n<<endl;
    cout<<"number of zero = "<<zero<<endl;
    cout<<"even numbers = "<<e<<endl;
    cout<<"odd numbers = "<<o<<endl;
    cout<<endl;
    return 0;
}