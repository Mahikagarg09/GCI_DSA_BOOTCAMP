#include <iostream>

using namespace std;
int power(int n,int x){
    if(x==0){
        return 1;
    }
    else if(x%2==0){
       int y=power(n,x/2);
       return y*y;
       
       
    }else{
        return n*power(n,x-1);
    }
}

int main()
{
    int n,x;
    cin>>n>>x;
    cout<<power(n,x);

    return 0;
}
