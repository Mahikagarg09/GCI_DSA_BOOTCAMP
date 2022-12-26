#include <bits/stdc++.h>
using namespace std;

int solve(int s,int d,int h,int n,int &count){
    count++;
    if(n==1){
        cout<<"plate "<<n<<" moving from "<<s<<" to "<<d<<endl;
        return count;
    }
    solve(s,h,d,n-1,count);
    cout<<"plate "<<n<<" moving from "<<s<<" to "<<d<<endl;
    solve(h,d,s,n-1,count);
    return count;
}

int main()
{
   int n;
   cin>>n;
   int s=1,h=2,d=3,count =0;
   cout<<solve(s,d,h,n,count);
    return 0;
}
