#include <iostream>

using namespace std;

int lcm(int a,int b){
    static int ctr=0;
    ctr+=b;
    if(ctr%a==0 && ctr%b==0){
        return ctr;
    }else{
        lcm(a,b);
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    (a>b) ? cout<<lcm(b,a) : cout<<lcm(a,b);
    return 0;
}
