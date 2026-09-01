class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int> ans;
        set<int> st;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>nums.size()/3){
                st.insert(nums[i]);
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};