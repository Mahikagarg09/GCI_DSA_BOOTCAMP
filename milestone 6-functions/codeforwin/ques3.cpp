#include<iostream>
#include<math.h>
using namespace std;
int  max(int n1,int n2){
    if(n1>n2){
       return n1;
    }else{
        return n2;
    }
}
int  min(int n1,int n2){
    if(n1<n2){
       return n1;
    }else{
        return n2;
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"max of "<<x<<" and "<<y<<" is "<<max(x,y)<<endl;
    cout<<"min of "<<x<<" and "<<y<<" is "<<min(x,y)<<endl;
    return 0;
}