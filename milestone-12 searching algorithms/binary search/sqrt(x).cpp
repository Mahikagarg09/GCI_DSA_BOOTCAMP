class Solution {
public:
    long long binarysearch(int x){
    int low=0,high=x;
    long long int mid,res,ans=-1;
    while(low<=high){
        mid=low+(high-low)/2;
        res=mid*mid;
        if(res==x){
            return mid;
        }else if(res>x){
                high=mid-1;
        }else{
            ans=mid;
            low=mid+1;
        }
    }
    return ans;
}
int mySqrt(int x) {
    return binarysearch(x);    
}

};