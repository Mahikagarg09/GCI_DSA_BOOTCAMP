//PROGRAM TO CONVERT A NUMBER INTO WORDS
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
   while(rev>0){
   
      switch(rev%10){
         case 1:
           cout<<"one ";
           break;
         case 2:
           cout<<"two ";
           break;
         case 3:
           cout<<"three ";
           break;
         case 4:
           cout<<"four ";
           break;
         case 5:
           cout<<"five ";
           break; 
         case 6:
           cout<<"six ";
           break; 
         case 7:
           cout<<"seven ";
           break;
         case 8:
           cout<<"eight ";
           break;
         case 9:
           cout<<"nine ";
           break;
         case 0:
           cout<<"zero ";
           break;
      }
      rev=rev/10;
   }
}