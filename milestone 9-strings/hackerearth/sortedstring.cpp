#include <bits/stdc++.h>
using namespace std;

int findmin(int arr[],int n){
    int min=n+1,k=0,i;
    for(i=0;i<26;i++){
        if(arr[i]<min && arr[i]!=0){
            min=arr[i];
            k=i;
        }
    }
    return k;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str,res="";
        cin>>str;
        int n=str.length(),arr[26]={0};
        for(int i=0;i<n;i++){
            arr[str[i]-'a']++;
        }
        while(res.length()!=n){
            int p=findmin(arr,n);
            for(int i=0;i<arr[p];i++){
                res+=('a'+p);
            }
            arr[p]=n;
        }
        cout<<res<<endl;
    }
}