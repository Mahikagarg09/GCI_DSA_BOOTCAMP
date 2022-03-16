/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/
#include<iostream>
using namespace std;
int main(){
    int quantity,cost;
    cin>>quantity;
    cost=quantity*100;
    if(quantity>1000){
       cout<<"total cost is "<<0.9*cost<<endl; 
    }else{
        cout<<"total cost is"<<cost<<endl;
    }
    
}