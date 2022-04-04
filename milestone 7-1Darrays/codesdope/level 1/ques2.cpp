#include<iostream>
using namespace std;
int main(){
    int n,i,a[10],flag=0;
    cout<<"enter 10 elements:"<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"printing array elements:"<<endl;
    for(i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"enter element you want to search:";
    cin>>n;
    for(i=0;i<10;i++){
        if(n==a[i]){
            flag=1;
            break;
        }    
    }
    if(flag==1){
        cout<<n<<"is found at position "<<i+1<<endl;
    }else{
            cout<<n<<" is not found in array"<<endl;
    }
    return 0;
}