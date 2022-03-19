//PROGRAM TO FIND LCM OF TWO NUMBERS
#include<iostream>
using namespace std;
int main(){
    int n1,n2,max=0,lcm=0,i=0;
    cin>>n1>>n2;
    if(n1>n2){
        max=n1;
    }else{
        max=n2;
    }
    i=max;
    while(1){
        if(i%n1==0 && i%n2==0){
            lcm=i;
            break;
        }
        i+=max;
    }
    cout<<"lcm is "<<i<<endl;
    return 0;
}