#include <iostream>
using namespace std;
float tax(int gross,int saving){
    float tax;
    if(saving<=100000){
        gross=gross-saving;
    }else{
        gross=gross-100000;
    }
    if(gross<=100000){
        tax=0;
    }else if(gross>100000 && gross<=200000){
        tax=gross*0.1;
    }
    else if(gross>200000 && gross<=500000){
        tax=10000+gross*0.2;
    }else{
        tax=10000+100000+gross*0.3;
    }
    return tax;
}

int main()
{
  int gs,ss ;
  cout << " Enter gross salary: ";
  cin >>gs;
  cout << " Enter amount of savings : ";
  cin >>ss; 
  cout<<"tax = "<<tax(gs,ss)<<endl;
  
  return 0;
}
