#include <iostream>

using namespace std;

int main()
{
	long long t,sum=0,count=0;
	cin>>t;
	long long a[t],i;
	for(i=0;i<t;i++){
	    cin>>a[i];
	    if(a[i]>=0){
	        sum+=a[i];
	        count++;
	    }
	}
	if(sum==0){
	    int max=a[0];
	    for(i=1;i<t;i++){
	        if(a[i]>max)max=a[i];
	    }
	    sum=max;
	    count=1;
	}
	cout<<sum<<" "<<count;

    return 0;
}