#include <iostream>

using namespace std;

int hcf(int a,int b){
    if(a==b || b%a==0){
        return a;
    }
    if(a%b==0){
        return b;
    }
    if(a>b){
        return hcf(a%b,b);
    }
    else{
        return hcf(a,b%a);
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);

    return 0;
}
