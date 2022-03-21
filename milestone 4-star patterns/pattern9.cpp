#include<iostream>
using namespace std;
int main(){
    int i,j;
    char k;
    for(i=1;i<=5;i++){
        k='A';
        for(j=1;j<=7;j++){
            if(j<=5-i || j>=3+i){
                cout<<k;
                j<4 ? k++ :k--;
            }else{
                cout<<" ";
                if(j==4){
                    k--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}