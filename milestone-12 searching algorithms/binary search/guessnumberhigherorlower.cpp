class Solution {
public:
    int guessNumber(int n) {
        int low=1,high=n,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            int res=guess(mid);
            if(res==0){
                return mid;
            }else if (res>0){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return 0;
    }
};