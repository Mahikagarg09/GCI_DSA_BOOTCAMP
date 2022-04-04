#include<iostream>
using namespace std;
void unique(int a[],int len){
    for(int i=0;i<len;i++){
        int j;
        for( j=0;j<i;j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(i==j){
            cout<<a[i]<<" ";
        }
    }

}

int main(){
    int n,i,size;
    cout<<"enter the number of elemnts you want in array:";
    cin>>size;
    int a[size];
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    
    cout<<"unique elements in array are ";
    unique(a,size);
            
        
    return 0;
}
