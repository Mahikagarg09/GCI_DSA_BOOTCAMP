#include <iostream>
using namespace std;
int main() {
	int t,count=0;
	cin>>t;
	while(t--){
		int w,h;
		cin>>w>>h;
		double r1,r2;
		r1=double(w)/h;
		r2=double(h)/w;
        if(((r1>=1.6) && (r1<=1.7)) ||((r2>=1.6) && (r2<=1.7))){
            count++;
        }
	}
	cout<<count;
}