#include <iostream>
using namespace std;

void copy(char str1[],char str2[] ,int ctr)
{
    str2[ctr]=str1[ctr];
    if(str1[ctr]='\0'){
        return;
    }
    copy(str1,str2,ctr+1);
}

int main(){
    char a1[20] = "MaNam";
    char a2[20];
    //int n = sizeof(a) / sizeof(a[0]);
    copy(a1,a2,0);
    return 0;
}
