//11.program to find first and last digit
#include <iostream>
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
   first=temp/(pow(10,count-1));
   cout<<"first="<<first<<"    "<<"last="<<last<<endl;

   return 0;
}
