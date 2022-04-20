#include<iostream>
using namespace std;
void input(int a[][20],int m){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void uphalf(int a[][20],int m){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(j>=i){
                cout<<a[i][j];
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int x, a[20][20];
    cout<<"enter the no. of rows and columns you want in sqare matrix:";
    cin>>x;
    input(a,x);
    cout<<"PRINTING UPPER HALF-----\n";
    uphalf(a,x);
    return 0;
}