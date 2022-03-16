/*A 4 digit number is entered through keyboard.
 Write a program to print a new number with digits reversed as of orignal one.*/
 #include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    while(n>0){
       rev=rev*10+(n%10);
       n=n/10;
    }
    cout<<"reverse number= "<<rev<<endl;
    return 0;
}