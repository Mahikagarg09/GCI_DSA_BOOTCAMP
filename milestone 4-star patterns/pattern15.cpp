#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,m;
    for(i=1;i<=9;i++){
        i<=5 ? k++ : k--;
        m=1;
        for(j=1;j<=5;j++){
            if(j>=6-k && j<=5){
                cout<<m;
                m++;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}