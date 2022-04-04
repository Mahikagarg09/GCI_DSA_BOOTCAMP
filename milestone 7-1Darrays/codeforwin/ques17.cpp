#include<iostream>
using namespace std;

int main(){
    int n,i,size,j=0,o=0,e=0,m=0;
    cout<<"enter the number of elements you want in array:";
    cin>>size;
    int a[size];
    cout<<"enter "<<size<<" elements:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
        if(a[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    int b[e],c[o];
    for(i=0;i<size;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
        }else{
            c[m]=a[i];
            m++;
        }
    }
    cout<<"array having even elements:";
    for(i=0;i<e;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl<<"array having odd elements:";
    for(i=0;i<o;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}