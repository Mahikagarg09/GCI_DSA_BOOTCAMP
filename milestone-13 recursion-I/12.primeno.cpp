
#include <iostream>

using namespace std;
int i;
int prime(int n){
    if(i==1){
        return 1;
    }else if(n%i==0){
        return 0;
    }else{
        i=i-1;
        prime(n);
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    i=n/2;
    int res=prime(n);
    if(res==0){
        cout<<n<<" is not a prime no.";
    }else{
        cout<<n<<" is a prime no.";
    }

    return 0;
}