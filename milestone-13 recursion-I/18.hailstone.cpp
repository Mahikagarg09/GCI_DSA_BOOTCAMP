#include <iostream>

using namespace std;
void hailstone(int n){
    if(n==1){
        cout<<"1";
        return;
    }
    if(n%2==0){
        cout<<n<<" ";
        hailstone(n/2);
    }else{
        cout<<n<<" ";
        hailstone((3*n)+1);
    }
}

int main()
{
    int n;
    cin>>n;
    hailstone(n);

    return 0;
}
