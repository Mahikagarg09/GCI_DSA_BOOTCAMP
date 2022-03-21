#include<iostream>
using namespace std;
int main(){
    int i,j;
    char k='@',m;
    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
            if(j<=5-i || j>=i+3){
                m=k+j;
                cout<<m;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}