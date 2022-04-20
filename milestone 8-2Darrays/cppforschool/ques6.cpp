#include<iostream>
using namespace std;
void input(int a[][20],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void display(int a[][20],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x,y,i,j, a[20][20],b[20][20],c[20][20];
    cout<<"enter the no. of rows  you want in both  matrixes:";
    cin>>x;
    cout<<"enter the no. of columns you want in both  matrixes:";
    cin>>y;
    cout<<"enter elements for matrix 1:\n";
    input(a,x,y);
    cout<<"enter elements for matrix 2:\n";
    input(b,x,y);
    cout<<"MATRIX -1 ----->\n";
    display(a,x,y);
    cout<<"MATRIX -2----->\n";
    display(b,x,y);
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"SUM MATRIX----->\n";
    display(c,x,y);
    return 0;
}