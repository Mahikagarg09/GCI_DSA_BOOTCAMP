
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	
	vector<int>temp;
    void shuffle(int arr[],int a,int b,int n){
        if(b==n){
            return;
        }
        temp.push_back(arr[a]);
        temp.push_back(arr[b]);
        shuffle(arr,a+1,b+1,n);
    }
	void shuffleArray(int arr[],int n)
	{
	    int m=n/2;
	    shuffle(arr,0,m,n);
	    for(int i=0;i<=n;i++){
	        arr[i]=temp[i];
	    }
	}
		 

};

