//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='a'&& a<='z'){
        cout<<"it is  a lowercase"<<endl;
    }else{
        cout<<"it is an uppercase"<<endl;
    }
    return 0;
}