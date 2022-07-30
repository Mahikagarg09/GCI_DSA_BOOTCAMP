#include <iostream>
using namespace std;

long binary(int decNo)
{
    static long biNo,r,factor = 1;

    if(decNo != 0)
    {
         r = decNo % 2;
         biNo = biNo + r * factor;
         factor = factor * 10;
         binary(decNo / 2);//calling the function convertBinary itself recursively
    }
    return biNo;
}

int main(){
    int n;
    cin>>n;
    cout<<binary(n);
    return 0;
}
