/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include<iostream>
using namespace std;
int main(){
    int salary,years;
    cin>>salary>>years;
    if(years>5){
        cout<<"net bonus amount is "<<(0.05*salary)+salary<<endl;
    }else{
        cout<<"net bonus amount is "<<salary<<endl;
    }
}

