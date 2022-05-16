#include <bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
    reverse(str.begin(), str.end());
    // Add space at the end so that the last word is also reversed
    str.insert(str.end(), ' ');
    int n = str.length();
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            reverse(str.begin() + j,
                    str.begin() + i);
            j = i + 1;
        }
    }
    // Remove spaces from the end of the word that we appended
    str.pop_back();
    return str;
}
 
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        getline (cin, s);
        string rev = reverseString(s);
        cout << rev<<endl;;  
    }
    return 0;
}


