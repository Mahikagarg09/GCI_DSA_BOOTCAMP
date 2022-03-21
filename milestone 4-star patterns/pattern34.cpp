#include<iostream>
using namespace std;
int main(){
    int i,j,r,k=1,p;
    cout<<"enter no. of rows:";
    cin>>r;
    for(i=1;i<=r;i++){
        p=k;
        for(j=1;j<=i;j++){
            cout<<p;
            p=p-(r-i+j);
        }
        k=k+1+r-i;
        cout<<endl;
    }
    return 0;
}