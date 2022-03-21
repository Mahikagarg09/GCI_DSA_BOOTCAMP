#include<iostream>
using namespace std;
int main(){
    int i,j,k,m;
    for(i=1;i<=4;i++){
        k=i,m=1;
        for(j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                if(j<=3){
                    cout<<k;
                    k--;
                }else{
                    cout<<m;
                    m++;
                }
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}