//PROGRAM TO FIND PRIME FACTORS OF A NUMBER
#include<iostream>
using namespace std;
int main(){
    int n,i,prime,j;
    cin>>n;
    cout<<" prime factors of "<<n<<" are ";
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
    return 0;
}