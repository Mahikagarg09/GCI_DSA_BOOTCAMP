//fibonacci series upto n terms
#include<iostream>
using namespace std;
int main()
{
    int first,second,third,count,i;
    cout<<"Enter the first term:";
    cin>>first;
    cout<<"Enter the second term:";
    cin>>second;
    cout<<"Enter the no. of terms you want in fibonacci series:";
    cin>>count;
    cout<<first<<" ";
    cout<<second<<" ";
    for(i=0;i<count-2;i++){
        third=first+second;
        first=second;
        second=third;
        cout<<third<<"   ";
    }
    return 0;
}    
