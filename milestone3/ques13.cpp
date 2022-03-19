//PROGRAM TO SWAP FIRST AND LAST DIGIT OF A NUMBER
#include<iostream>
#include<math.h>
using namespace std;

   
int main() {
   int n,first=0,last=0,count=0;
   cin>>n;
   int temp=n;
   last=temp%10;
   while(n>0){
      n=n/10;
      count+=1;
   }
    int dig=round(pow(10,count-1));
   first=temp/dig;
   cout<<"first="<<first<<"    "<<"last="<<last<<endl;
   cout<<"no.of digits is"<<count<<endl;
   cout<<"dig="<<dig<<endl;
   temp=temp%dig;
   temp=temp/10;
   temp=(temp*10)+first;
   temp=(last*dig)+temp;
   cout<<"temp="<<temp<<endl;
   return 0;
}