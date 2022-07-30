#include <iostream>

using namespace std;
void printarray(int a[],int idx,int n) {
  if (idx==n){
    return;
  }
  
  cout<<"element - "<<idx<<" = "<<a[idx]<<endl;
  printarray(a,idx+1,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printarray(arr,0,n);

    return 0;
}
