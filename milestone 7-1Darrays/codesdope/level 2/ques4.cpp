#include<iostream>
using namespace std;
int main()
{
    int n, i, temp,j;
    cout<<"Enter the Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int high=0,shigh=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
       
  cout<<"final array is  :";
  for(i = 0;i<n;i++){
    cout << a[i] <<" ";
  }
    return 0;
}