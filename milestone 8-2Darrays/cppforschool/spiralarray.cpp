#include <iostream>

using namespace std;
void printspiral(int a[100][100],int m,int n){
    int t=0,b=m-1,r=n-1,l=0,dir=0,i;
    while(t<=b && l<=r){
        if(dir==0){
            for(i=l;i<=r;i++){
                cout<<a[t][i]<<" ";
            }
            dir=1;
            t++;
        }else if(dir==1){
            for(i=t;i<=b;i++){
                cout<<a[i][r]<<" ";
            }
            dir=2;
            r--;
        }else if(dir==2){
            for(i=r;i>=l;i--){
                cout<<a[b][i]<<" ";
            }
            dir=3;
            b--;
        }else if(dir==3){
            for(i=b;i>=t;i--){
                cout<<a[i][l]<<" ";
            }
            dir=0;
            l++;
        }
    }
}
int main()
{
    int rows,columns,i,j;
    cin>>rows>>columns;
    int arr[100][100];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printspiral(arr,rows,columns);
    return 0;
}
