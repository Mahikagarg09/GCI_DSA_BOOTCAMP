#include<iostream>
using namespace std;
int main(){
    int a[]={10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60},i,j=0,b[4];
    for(i=4;i<8;i++){
        b[j]=a[i];
        j++;
    }
    cout<<"subarray between index 3 and 8 is: ";
    for(i=0;i<j;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}