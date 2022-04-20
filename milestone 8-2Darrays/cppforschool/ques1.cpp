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
int sum(int a[][20],int m,int n){
    int i,j,s=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            s+=a[i][j];
        }
    }
    return s;
}
void rsum(int a[][20],int m,int n){
    int i,j,s;
    for(i=0;i<m;i++){
        s=0;
        for(j=0;j<n;j++){
            s+=a[i][j];
        }
        cout<<"sum of element in row "<<i<<" = "<<s;
    }
}
void csum(int a[][20],int m,int n){
    int i,j,s;
    for(i=0;i<n;i++){
        s=0;
        for(j=0;j<m;j++){
            s+=a[i][j];
        }
        cout<<"sum of element in column "<<i<<" = "<<s;
    }
}
void transpose(int a[][20],int m,int n){
    int i,j,b[n][m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[j][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int x,y, a[20][20],p;
    cout<<"enter the no. of rows you want in array:";
    cin>>x;
    cout<<"enter the no. of columns you want in array:";
    cin>>y;
     cout<<"choose from options below:"<<endl;
    cout<<"1.To input elements into matrix \n2.To display elements of matrix \n";
    cout<<"3.Sum of all elements of matrix\n4.To display row-wise sum of matrix ";
    cout<<"5.To display column-wise sum of matrix\n6.To create transpose of matrix\n";
    cin>>p;
    switch(p){
            case 1:
              cout<<"enter elements"<<endl;
              input(a,x,y);
              break;
            case 2:
              cout<<"enter elements"<<endl;
              input(a,x,y);
              cout<<"displaying elements"<<endl;
              display(a,x, y);
              break;
            case 3:
              cout<<"enter elements"<<endl;
              input(a,x,y);
              cout<<"sum of elements: "<<sum(a,x, y)<<endl;
              break;
            case 4:
              cout<<"enter elements"<<endl;
              input(a,x,y);
              rsum(a, x, y);
              break;
            case 5:
              cout<<"enter elements"<<endl;
              input(a,x,y);
              csum(a, x, y);
              break;
            case 6:
              cout<<"enter elements"<<endl;
              input(a,x,y);
              cout<<"transpose of matrix:"<<endl;
              transpose(a, x, y);
              break;
            default:
              cout<<"invalid choice ...try again"<<endl;
        }

    return 0;
}
