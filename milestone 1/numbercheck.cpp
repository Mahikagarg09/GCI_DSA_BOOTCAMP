//FIND WHETHER NUMBER IS NEGATIVE ZERO OR POSTIVE
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<n<<" is  a postive number"<<endl;
    }
    else if(n<0){
        cout<<n<<" is  a negative number"<<endl;
    }
    else{
        cout<<n<<" = zero"<<endl;
    }
    return 0;
}