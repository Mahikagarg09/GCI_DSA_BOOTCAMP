#include<iostream>
using namespace std;
void input(int a[4][6],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void display(int a[4][6],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void mul(int a[4][6],int m,int n){
    int i,j,s;
    for(i=0;i<m;i++){
        s=1;
        for(j=0;j<n;j++){
            s=s*a[i][j];
        }
        cout<<"product of elements in row "<<i<<" = "<<s<<endl;
    }
}

int main(){
    int a[4][6];
    input(a,4,6);
    cout<<"displaying elements:"<<endl;
    display(a,4,6);
    mul(a,4,6);
    return 0;
}