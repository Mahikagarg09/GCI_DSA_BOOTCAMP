/*Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1  */
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"absolute value of "<<n<<" is "<<fabs(n)<<endl;;
    return 0;
}