#include<iostream>
using namespace std;
int main(){
    int n,i,size,a[100],num,pos;
    cout<<"enter the number of elemnts you want in array:";
    cin>>size;
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"array before inserting:"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"enter the number you want to insert:";
    cin>>num;
    cout<<"enter the position you want to insert:";
    cin>>pos;
    if(pos>size+1 || pos <=0){
        cout<<"invalid position";
    }else{
        for(i=size;i>=pos;i--){
            a[i]=a[i-1];
        }
        a[pos-1]=num;
        size++;
    }
    cout<<"array after inserting:"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
