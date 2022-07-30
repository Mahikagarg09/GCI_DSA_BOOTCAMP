#include <iostream>
using namespace std;

char capital(char str[], int index,int n)
{
    if(index<=n){
        if(isupper(str[index])){
           return str[index];
        }else{
            return capital(str,index+1,n);
        }
    }else{
        return 0;
    }
}

int main(){
    char a[] = "MaNam";
    int n = sizeof(a) / sizeof(a[0]);
    cout<<capital(a, 0,n);
    return 0;
}
