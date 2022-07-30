#include <iostream>

using namespace std;
void evenodd(int value,int n){
    if(value>n){
        return;
    }
    cout<<value<<" ";
    evenodd(value+2,n);
}

int main()
{
    int n;
    cin>>n;
    cout<<"even nos. are - "<<endl;
    evenodd(2,n);
    cout<<endl<<"odd nos. are - "<<endl;
    evenodd(1,n);

    return 0;
}
