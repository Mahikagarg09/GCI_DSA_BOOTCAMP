#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    char k;
    for(i=1;i<=4;i++){
        k='A';
        m=1;
        for(j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                if(j<=4){
                    cout<<m;
                    m++;
                }else{
                    cout<<k;
                    k++;
                }
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}