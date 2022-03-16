//Take values of length and breadth of a rectangle from user and check if it is square or not.
#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cin>>length>>breadth;
    if(length==breadth){
        cout<<" it is a square"<<endl;
    }else{
        cout<<"it is a rectangle"<<endl;
    }
    return 0;
}