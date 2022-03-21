#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=6-i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}