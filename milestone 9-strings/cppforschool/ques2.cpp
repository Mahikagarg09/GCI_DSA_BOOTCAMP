#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    int i;
    cin>>s1;
    for(i=s1.size()-1;i>=0;i--){
        cout<<s1[i];
    }
    cout<<endl;
    return 0;
}