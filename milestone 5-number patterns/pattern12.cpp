#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        i%2==0 ? k=i : k=1;
        for(j=1;j<=i;j++){
            cout<<k;
            i%2==0 ? k-- : k++;
        }
        cout<<endl;
    }
    return 0;
}