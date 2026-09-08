class Solution {
public:
    int firstOccurrence(vector<int> &arr,int n,int t){
        int first=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==t){
                first=mid;
                high=mid-1;
            }else if(arr[mid]<t){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return first;
    }
    int lastOccurrence(vector<int> &arr,int n,int t){
        int last=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==t){
                last=mid;
                low=mid+1;
            }else if(arr[mid]<t){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstOccurrence(nums,n,target);
        if(first==-1){
            return {-1,-1};
        }
        int last=lastOccurrence(nums,n,target);
        return {first,last};
    }
};