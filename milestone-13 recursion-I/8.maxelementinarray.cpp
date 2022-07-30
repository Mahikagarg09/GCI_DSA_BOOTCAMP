#include <iostream>

using namespace std;

int maxelement(int a[],int n){
    static int max=a[0],i=0;
    while(i<n){
        if(max<a[i])max=a[i];
        i++;
        maxelement(a,n);
    }
    return max;
    
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxelement(arr,n);
}
