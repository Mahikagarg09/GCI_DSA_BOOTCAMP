#include<iostream>
using namespace std;
int pf(int n){
    int i,prime,j;
    cout<<" prime factors of "<<n<<" are "<<endl;
    for(i=2;i<=n;i++){
        if(n%i==0){
            prime=0;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    prime=1;
                    break;
                }
            }
            if(prime==0){
                cout<<i<<" ";
            }
        }
    }
}
int main(){
    int x;
    cin>>x;
    pf(x);
    return 0;
}