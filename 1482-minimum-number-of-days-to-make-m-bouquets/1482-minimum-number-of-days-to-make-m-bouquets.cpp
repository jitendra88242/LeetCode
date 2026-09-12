class Solution {
public:
    long long possible(vector<int>& arr,int days,int m,int k){
        long long noofB=0;
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=days){
                count++;
            }else{
                noofB+=(count/k);
                count=0;
            }
        }
        noofB+=(count/k);
        return noofB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)bloomDay.size()<(long long)m*k) return -1;
        int ans=INT_MAX;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};