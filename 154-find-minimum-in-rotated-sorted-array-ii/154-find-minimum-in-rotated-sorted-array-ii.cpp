class Solution {
public:
    int findMin(vector<int>& nums) {
        int hi=nums.size()-1;
        int lo=0;
        // take a look at the different templates for binary search
        while(lo<hi){

            int mid= lo+ (hi-lo)/2;
            
            if(nums[mid]<nums[hi]){hi=mid;}
            else if(nums[mid]>nums[hi]){lo=mid+1;}
            
            else{
                if(hi!=0 and nums[hi]>=nums[hi-1]){hi--;}
                else{return nums[hi];}
            }
        }
        return nums[hi];
    }
};