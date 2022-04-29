#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str1;
        cin>>str1;
        int i,k;
        k=str1.length();
        for(i=k-1;i>=0;i--){
            cout<<str1[i];
        }
        cout<<endl;
    }

    return 0;
}
