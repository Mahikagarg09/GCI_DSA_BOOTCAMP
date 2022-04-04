#include<iostream>
using namespace std;
int main()
{
    int n, i, temp,j=0;
    cout<<"Enter the Size: ";
    cin>>n;
    int a[n],b[n+1];
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int high=0,shigh=0;
    for(i=0;i<n;i++){
       if(a[i]>high){
          high= a[i];
          j = i;
        } 
   }
   for(i = 0;i<n;i++){
      if(a[i]<high && a[i]>shigh){
         shigh = a[i];
      }
   }
  for(i = 0;i<j;i++){
    b[i] = a[i];
  }
  b[j] = shigh;
  b[j+1] = high-shigh;
  for(i = j+2;i<n+1;i++){
    b[i] = a[i-1];
  }
  cout<<"final array is  :";
  for(i = 0;i<n+1;i++){
    cout << b[i] <<" ";
  }
    return 0;
}