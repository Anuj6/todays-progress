class Solution {
public:
    int findMin(vector<int>& nums) {
        return solve(nums);
    }
    
    int solve(vector<int>nums){
        int n=nums.size();
        
        int start= 0;
        int end=n-1;
        while(start<=end){
            int mid= start+ (end-start)/2;
            int next= (mid+1)%n;
            int prev=   (mid+n-1)%n;
            if(nums[mid]<=nums[prev] and nums[mid]<=nums[next]){
                return nums[mid];
            }
            
            if(nums[end]>=nums[mid]){
                end=mid-1;
            }
            else if(nums[start]<=nums[mid]){
                start=mid+1;
            }
            
        }
        if(start==end){
            return nums[start];
        }
        return -1;
    }
};