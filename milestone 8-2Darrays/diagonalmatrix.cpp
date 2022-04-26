#include <iostream>
using namespace std;
bool isValid(int i, int j,int r,int c)
{
    if (i < 0 || i >= r || j >= c || j < 0)
        return false;
    return true;
}
void diagonalmatrix(int arr[1000][1000],int r,int c){
    for(int k=0;k<r;k++){
        cout<<arr[k][0]<<" ";
        int i=k-1;
        int j=1;
        while(isValid(i,j,r,c)){
            cout<<arr[i][j]<<" ";
            i--;
            j++;
        }
        cout<<endl;
    }
    for(int k=1;k<c;k++){
        cout<<arr[r-1][k]<<" ";
        int i=r-2;
        int j=k+1;
        while(isValid(i,j,r,c)){
            cout<<arr[i][j]<<" ";
            i--;
            j++;
        }
        cout<<endl;
    }
}
int main()
{
    int r,c,i,j,a[1000][1000];
    cin>>r>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    diagonalmatrix(a,r,c);
    return 0;
}
