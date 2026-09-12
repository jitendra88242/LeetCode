class Solution {
public:
    int mySqrt(int num) {
    if(num==0) return 0;
    int ans=1;
    int low=1;
    int high=num;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if((mid*mid)<=num){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
        return ans;
    }
};