#include<iostream>

using namespace std;
int vote(int r){
    r>=18 ? cout<<r<<" is eligible to vote"<<endl : cout<<r<<"is not eligible to vote"<<endl;
}
int main(){
    int x;
    cin>>x;
    vote(x);
    return 0;
}