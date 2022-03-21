#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        i%2==0 ? k=2 : k=1;
        for(j=1;j<=i;j++){
            cout<<k;
            k+=2;
        }
        cout<<endl;
    }
    return 0;
}