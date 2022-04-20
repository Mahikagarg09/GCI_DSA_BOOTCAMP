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
    int x,y,z,i,j,k, a[20][20],b[20][20],c[20][20],sum;
    cout<<"enter the no. of rows  you want in 1st matrix:";
    cin>>x;
    cout<<"enter the no. of columns you want in 1st matrix:";
    cin>>y;
    cout<<"enter the no. of columns you want in 2nd matrix:";
    cin>>z;
    cout<<"enter elements for matrix 1:\n";
    input(a,x,y);
    cout<<"enter elements for matrix 2:\n";
    input(b,y,z);
    cout<<"MATRIX -1 ----->\n";
    display(a,x,y);
    cout<<"MATRIX -2----->\n";
    display(b,y,z);
    for(i=0;i<x;i++){
        for(j=0;j<z;j++){
            c[i][j]=0;
            for(k=0;k<y;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"MULTIPLICATION MATRIX----->\n";
    display(c,x,z);
    return 0;
}