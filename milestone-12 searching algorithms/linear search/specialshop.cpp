#include<math.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,a,b,i,r1,r2;
        cin>>n>>a>>b;
        long long p[n+1];
        for(i=0;i<=(n/2);i++){
            r1=(a*pow(i,2))+(b*pow(n-i,2));
            r2=(a*pow(n-i,2))+(b*pow(i,2));
            p[i]=min(r1,r2);
        }
        long long min=p[0];
        for(i=0;i<=n/2;i++){
            if(p[i]<min)min=p[i];
        }
        cout<<min<<endl;
    }

    return 0;
}
