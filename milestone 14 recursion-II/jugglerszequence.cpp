//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void solve(vector<int>&ans,int N){
        ans.push_back(N);
        if(N==1){
            return;
        }
        if(N%2==0){
            N=pow(N,.5);
            solve(ans,N); 
        }else{
            N=pow(N,1.5);
            solve(ans,N); 
        }
    }
    vector<int> jugglerSequence(int N){
        vector<int>ans;
        solve(ans,N);
        return ans;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends