class Solution {
public:
int find(vector<int> arr,int n,int pages){
    int st=1;
    long long pagesread=0;
    for(int i=0;i<n;i++){
        if(pagesread+arr[i]>pages){
            st++;
            pagesread=arr[i];
        }else{
            pagesread+=arr[i];
        }
    }
    return st;
}
    long long sum(vector<int> &arr,int n){
        long long s=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
        }
        return s;
    }
    int splitArray(vector<int>& nums, int k) {
       if(k>nums.size()) return -1;
       int low=*max_element(nums.begin(),nums.end());
       int high=sum(nums,nums.size());
       while(low<=high){
        int mid=low+(high-low)/2;
        int sumk=find(nums,nums.size(),mid);
        if(sumk>k){
            low=mid+1;
        }else{
            high=mid-1;
        }
       }
       return low; 
    }
};