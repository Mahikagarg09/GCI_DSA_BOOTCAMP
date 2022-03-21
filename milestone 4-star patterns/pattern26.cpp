#include<iostream>
using namespace std;
int main(){
    int i,j;
    char k;
    for(i=1;i<=4;i++){
        k=64+i;
        for(j=1;j<=4;j++){
            if(j>=1 && j<=i){
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