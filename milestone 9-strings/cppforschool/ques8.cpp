#include <iostream>

using namespace std;

int main()
{
    int i,j,temp,l;
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    for(l=0;str[l]!='\0';l++);
    for(i=0;i<l/2;i++){
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    cout<<str<<endl;
    return 0;
}