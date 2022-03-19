//check whether a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n, prime=1;
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(n==1){
        cout<<"neither prime nor composite"<<endl;
    }
    else if(prime==0){
        cout<<"the number is composite"<<endl;
    }
    else{
        cout<<"the number is prime"<<endl;;
    }
    return 0;
}
