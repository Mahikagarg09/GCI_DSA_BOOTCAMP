//Take input of age of 3 people by user and determine oldest and youngest among them.
#include<iostream>
using namespace std;
int main(){
    int a[3],max=0,min,i;
    cout<<"enter ages of three people:";
    for(i=0;i<=2;i++){
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<3;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"youngest and oldest person are with age "<<min<<" and "<<max<<" respectively"<<endl;
    return 0;
}
