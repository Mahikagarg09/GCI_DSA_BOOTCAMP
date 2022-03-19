//16.PROGRAM TO ENTER A NUMBER AND PRINT ITS REVERSE 
//17.AND CHECK WHETHER IT IS A PALINDROME OR  NOT
#include<iostream>
using namespace std;
int main(){
   int n,rev=0;
   cin>>n;
   int temp=n;
   while(n>0){
      rev=rev*10+(n%10);
      n=n/10;
   }
   cout<<"reverse of digit is="<<rev<<endl;
   if(rev==temp){
      cout<<"PALINDROME"<<endl;
   }else{
      cout<<"NOT PALINDROME"<<endl;
   }
   return 0;
}
