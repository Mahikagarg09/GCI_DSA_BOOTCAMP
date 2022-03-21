#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,rows,columns;
    cin>>rows>>columns;
    for(i=1;i<=rows;i++){
        i<=(rows+1)/2 ? k++ : k--;
        for(j=1;j<=columns;j++){
            if(j>=5-k && j<=3+k){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}