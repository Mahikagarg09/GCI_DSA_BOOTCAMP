#include <iostream>

using namespace std;

int main()
{
    int i;
    char str[25];
    cout<<"enter the string:";
    cin.getline(str,25);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    return 0;
}