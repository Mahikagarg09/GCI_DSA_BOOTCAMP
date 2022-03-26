#include<iostream>
using namespace std;
int prime(int n){
    int prime=1;
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
        cout<<"the number is composite"<<endl;;
    }
    else{
        cout<<"the number is prime"<<endl;;
    }

}
int main(){
    int x;
    cin>>x;
    prime(x);
    return 0;
}