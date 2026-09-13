class Solution {
public:
    int findDays(vector<int> &arr,int cap){
        int days=1, load=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]+load>cap){
                days++;
                load=arr[i];
            }else{
                load+=arr[i];
            }
        }
        return days;
    }
    long long sum(vector<int> &arr){
        long long s=0;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
        }
        return s;
    }
    int shipWithinDays(vector<int>& weight, int days) {
        int ans=INT_MAX;
        int low=*max_element(weight.begin(),weight.end());
        int high=(int)sum(weight);
        while(low<=high){
            int mid=low+(high-low)/2;
            int noofDays=findDays(weight,mid);
            if(noofDays<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};