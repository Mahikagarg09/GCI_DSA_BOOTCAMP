#include<iostream>
using namespace std;
int main(){
    int n,i,odd=0,even=0;
    int a [5]={3,1,2,6,7};
    cout<<"printing array elements:"<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<" ";
        if(a[i]%2==0){
            even+=1;
        }else{
            odd+=1;
        }
        
    }
    cout<<endl<<"odd elements = "<<odd<<endl<<"even elements = "<<even;
    cout<<endl;
    return 0;
}