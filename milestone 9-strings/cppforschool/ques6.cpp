#include <iostream>
#include <string.h>
using namespace std;
void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l){
        if (str[l++] != str[h--]){
            cout<<str<<" is not a palindrome\n";
            return;
        }
    }
    cout<<str<<" is a palindrome\n";
}
int main()
{
    char str[20];
    cin.getline(str,20);
    isPalindrome(str);
    return 0;
}