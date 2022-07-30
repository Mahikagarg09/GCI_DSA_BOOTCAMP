#include <iostream>
using namespace std;

int check(int n){
    int flag=0;
    if(n%21==0){
        flag=1;
        return flag;
    }else{
        while(n){
            if(n%100==21){
                flag=1;
                return flag;
            }
            n=n/10;
        }
        return flag;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    check(n)==1 ? cout<< "The streak is broken!" << endl : cout << "The streak lives still in our heart!" << endl;
	    
	}
		
}