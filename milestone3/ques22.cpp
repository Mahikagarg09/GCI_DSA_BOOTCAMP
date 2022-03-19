//PROGRAM TO FIND FACTORS OF A NUMBER
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    cout<<"factors of "<<n<<" are ";
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}