//print all ascii values of all characters
#include<iostream>
using namespace std;
int main(){
    int i;

    cout<<"character\tascii value"<<endl;
    for(i=0; i<=255; i++) 
    {
        printf(" %c\t\t\t%d\n", i, i);
    }

    return 0;
}
