#include<iostream>
using namespace std;
int main(){
    int i,j,k=1,m=0;
    for(i=1;i<=21;i++){
        i<=11 ? m++ : m--;
        k=m-1;
        for(j=1;j<=21;j++){
            if(j>=12-m && j<=10 +m){
                cout<<" "<<k%10 ;
                j<11 ? k++ : k--;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}