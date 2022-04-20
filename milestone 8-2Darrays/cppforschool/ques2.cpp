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
void display(int a[][20],int m){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int left(int a[][20],int m){
    int i,j,s=0;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i==j){
                s+=a[i][j];
            }
        }
    }
    return s;
}
int right(int a[][20],int m){
    int i,j,s=0;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i+j==(m-1)){
                s+=a[i][j];
            }
        }
    }
    return s;
}
int main(){
    int x, a[20][20];
    cout<<"enter the no. of rows and columns you want in sqare matrix:";
    cin>>x;
    input(a,x);
    cout<<"displaying elements:"<<endl;
    display(a,x);
    cout<<"left diagonal sum = "<<left(a,x)<<endl;
    cout<<"right diagonal sum = "<<right(a,x)<<endl;
    return 0;
}
