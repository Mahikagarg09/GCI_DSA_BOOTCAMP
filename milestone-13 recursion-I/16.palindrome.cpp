#include <iostream>
using namespace std;

void reverse(char str[], int first,int last)
{
    
    if(str[first]==str[last]){
        if(first + 1 == last || first == last){
            cout<<"palindrome"<<endl;
            return;
        }
        reverse(str,first+1,last-1);
    }else{
        cout<<"not palindrome"<<endl;
    }
}

int main(){
    char a[] = "manam";
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a, 0,n-2);
    return 0;
}