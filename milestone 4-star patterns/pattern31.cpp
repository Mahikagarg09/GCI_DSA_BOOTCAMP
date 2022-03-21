#include<iostream>
using namespace std;
int main(){
    int i,j,k,m;
    char s;
    for(i=1;i<=4;i++){
        k=1;m=1;s='A';
        for(j=1;j<=7;j++){
            if(j<=3+i && j>=5-i && k ){
                if(i%2!=0){
                    cout<<m;
                    m++;
                }else{
                    cout<<s;
                    s++;
                }
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