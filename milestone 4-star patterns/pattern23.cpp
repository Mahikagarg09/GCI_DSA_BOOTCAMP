#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            if(j>=1 && j<=i){
                if(j%2!=0){
                    cout<<"1";
                }else{
                    cout<<"0";
                }
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}