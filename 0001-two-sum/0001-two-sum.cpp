class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        // map me bharo element and key == index
        int n = size(nums);
        for(int i = 0; i<n; i++){
            int need_more =  target - nums[i];
            
            if(mp.find(need_more) != mp.end()){
                 return {mp[need_more], i};
            }
            mp[nums[i]] = i;
        }
        return {-1, -1};
    }
};