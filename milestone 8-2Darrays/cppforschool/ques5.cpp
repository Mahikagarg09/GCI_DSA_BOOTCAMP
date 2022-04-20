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
void row(int a[][20],int m){
    int i,j;
    cout<<"middle row elements:\n";
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i==m/2){
                cout<<a[i][j]<<" ";
            }
        }
    }
}
void column(int a[][20],int m){
    int i,j;
    cout<<"\nmiddle column elements:\n";
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(j==m/2){
                cout<<a[i][j]<<" ";
            }
        }
    }
}

int main(){
    int x, a[20][20];
    cout<<"enter the no. of rows and columns you want in sqare matrix:";
    cin>>x;
    input(a,x);
    row(a,x);
    column(a,x);
    return 0;
}