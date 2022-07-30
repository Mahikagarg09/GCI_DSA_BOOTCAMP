#include <iostream>

using namespace std;
int binarysearch(int a[],int start,int end,int val){
  while(end>=start){
      int mid=start+(end-start)/2;
      if(a[mid]==val){
          return mid;
      }else if(a[mid]>val){
          return binarysearch(a,start,mid-1,val);
      }else{
          return binarysearch(a,mid+1,end,val-1);
      }
  }
  return -1;
 

  
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int val;
    cin>>val;
    int res=binarysearch(a,0,n-1,val);
    if(res==-1){
        cout<<"element not found";
    }else{
        cout<<"element found at index "<<res;
    }

    return 0;
}
