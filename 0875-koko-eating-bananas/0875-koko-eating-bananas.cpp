class Solution {
public:
    long long totalHrss(vector<int> &arr,int hr){
        long long  s=0;
        for(int i=0;i<arr.size();i++){
            s+=ceil((double)arr[i]/(double)hr);
        }
        return s;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=1;
        int high=*max_element(piles.begin(), piles.end());
        int low=1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(totalHrss(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};