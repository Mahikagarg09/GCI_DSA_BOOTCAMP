#include<iostream>
using namespace std;
int main(){
    int i,j;
    char k='@';
    for(i=1;i<=5;i++){
        k=k+2*(i-1)+1;
        for(j=1;j<=5;j++){
            if(j<=5 && j>=6-i){
                cout<<k;
                k--;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}