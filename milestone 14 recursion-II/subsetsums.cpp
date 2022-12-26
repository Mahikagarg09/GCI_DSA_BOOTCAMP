//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<int>arr,vector<int>&ans,int sum){
        if(arr.size()==0){
            ans.push_back(sum);
            return;
        }
        int sum1=sum,sum2=sum;
        sum2+=arr[0];
        arr.erase(arr.begin()+0);
        solve(arr,ans,sum1);
        solve(arr,ans,sum2);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        int sum=0;
        solve(arr,ans,sum);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends