#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
	long unsigned int i;
    cin>>a>>b;
    if(a.size()!=b.size()){
        cout<<"NO\n";
		return 0;
    }else{
        for(i=0;i<=a.size();i++){
            if(b[i]<a[i]){
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    
    return 0;
}
