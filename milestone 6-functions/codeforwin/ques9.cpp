#include<iostream>
using namespace std;
void perfect(int n1,int n2){
    int sum=0,i,j;
    for(i=n1;i<=n2;i++){
        for(j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
        cout<<i<<" ";
        }
        sum=0;
    }
}
int main(){
    int x,y;
    cout<<"lower limit=";
    cin>>x;
    cout<<"upper limit=";
    cin>>y;
    perfect(x,y);
    return 0;
}