#include <iostream>

using namespace std;

int main()
{
    int rows,columns,i,j,k,m,p;
    cin>>rows>>columns;
    int arr[rows][columns];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    int row[rows],column[columns];
    for (i = 0; i < rows; i++){
    row[i] = 0;
    }
    for (i = 0; i < columns; i++){
    column[i] = 0;
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(arr[i][j]==1){
                row[i]=1;
                column[j]=1;
        }
    }
    for (i = 0; i <rows; i++){
        for (j = 0; j < columns; j++){
            if ( row[i] == 1 || column[j] == 1 ){
                arr[i][j] = 1;
            }
        }
    }
}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}