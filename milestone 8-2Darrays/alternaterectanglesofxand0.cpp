#include <iostream>

using namespace std;
void printspiral(int a[100][100],int m,int n){
    int t=0,b=m-1,r=n-1,l=0,dir=0,i,p=0,k,j;
    while(t<=b && l<=r){
        p%2==0 ? k=1 : k=0;
        if(dir==0){
            for(i=l;i<=r;i++){
                a[t][i]=k;
            }
            dir=1;
            t++;
        }else if(dir==1){
            for(i=t;i<=b;i++){
                a[i][r]=k;
            }
            dir=2;
            r--;
        }else if(dir==2){
            for(i=r;i>=l;i--){
                a[b][i]=k;
            }
            dir=3;
            b--;
        }else if(dir==3){
            for(i=b;i>=t;i--){
                a[i][l]=k;
            }
            dir=0;
            l++;
            p++;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==1){
                cout<<"X ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int rows,columns,i,j;
    cin>>rows>>columns;
    int arr[100][100];
    printspiral(arr,rows,columns);
}

