#include<iostream>
using namespace std;
int duplicate(int a[],int len){
    int count=0;
    for(int i=0;i<len;i++){
        int j;
        for( j=0;j<i;j++){
            if(a[i]==a[j]){
                count+=1;
            }
        }
    }
    return count;
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
    cout<<"total no. of duplicate elements in array are "<< duplicate(a,size);;
    cout<<endl;
    return 0;
}