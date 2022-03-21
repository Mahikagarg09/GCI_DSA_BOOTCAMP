#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=7;j++){
            if(j<=3+i && j>=5-i && k){
                cout<<"*";
                k=0;
            }else{
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
    return 0;
}