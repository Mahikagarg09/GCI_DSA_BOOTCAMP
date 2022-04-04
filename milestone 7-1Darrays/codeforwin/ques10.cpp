#include<iostream>
using namespace std;
int main(){
    int n,i,size,a[100],pos;
    cout<<"enter the number of elemnts you want in array:";
    cin>>size;
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"array before deleting:"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"enter the position from you want to delete the element:";
    cin>>pos;
    if(pos>size+1 || pos <=0){
        cout<<"invalid position";
    }else{
        for(i=pos-1;i<size;i++){
            a[i]=a[i+1];
        }
        size--;
    }
    cout<<"array after deleting:"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}