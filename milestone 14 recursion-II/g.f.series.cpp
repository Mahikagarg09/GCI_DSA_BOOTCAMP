#include<iostream>
using namespace std;

void series(long long  t1,long long t2,long long n){
    if(n>=1){
        long long t3=(t1*t1)-t2;
        cout<<t3<<" ";
        t1=t2;
        t2=t3;
        series(t1,t2,n-1);
    }
}
void gfSeries(int n)
{
    long long t1=0, t2=1;
    cout<<t1<<" "<<t2<<" ";
    series(t1,t2,n-2);
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    gfSeries(n);
    return 0;
}