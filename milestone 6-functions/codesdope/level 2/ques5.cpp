#include<iostream>
#include<math.h>
using namespace std;
int power(int a,int b){
    return pow(a,b);
}
int main(){
    int x,y;
    cout<<"enter base number:";
    cin>>x;
    cout<<"enter power number:";
    cin>>y;
    cout<<power(x,y)<<endl;
    return 0;
}