#include <iostream>
using namespace std;
int main() {
	int x,y,s,t,i,j,count=0;
	cin>>x>>y>>s>>t;
	for(i=x;i<=x+s;i++){
		for(j=y;j<=y+s;j++){
			if((i+j)<=t){
				count++;
			}
		}
	}
	cout<<count<<endl;
}