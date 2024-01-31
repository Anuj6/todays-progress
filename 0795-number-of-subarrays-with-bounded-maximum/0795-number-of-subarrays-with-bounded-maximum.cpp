class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int l, int r) {
        int si  = 0;
        int ei = 0;
        int prev = 0;
        int count = 0;
        
        
        for(int i = 0; i<size(nums); i++){
            // first case
            if(nums[i] >= l and nums[i] <= r){
                prev = (ei-si+1);
                count += prev;
            }
            
            // second case
            if(nums[i] < l){
                count += prev;
            }
            // third case : reset the starting pointer
            if(nums[i] > r){
                si = ei + 1;
                prev = 0;
            }
            
            ei++;
        } 
        
        return count;
    }
};