#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int k=0,i;
    k=s.length();
    for(int i = 0; i <k; i++){
        if(i == 0) cout<<(char)toupper(s[i]);
        else if(s[i] == ' ' && s[i+1] != ' ')
        {
            cout<<" "<<(char)toupper(s[i+1]);
            i++;
        }
        else cout<<s[i];
    }
    return 0;
}
