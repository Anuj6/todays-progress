class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // shift all the even nos. to left
        int type_even = 0;
        int type_odd = nums.size()-1;
        
        while(type_odd > type_even){
            while(nums[type_even]%2 == 0 && type_even < type_odd){
                type_even++;
            }
            if(nums[type_even]%2 != 0){
                if(nums[type_odd]%2 == 0){
                    swap(nums[type_odd], nums[type_even]);
                    type_odd--;
                    type_even++;
                }
                else{
                    type_odd--;
                }
            }
            else{
                type_even++;
                type_odd--;
}        }
        
        
        return nums;
    }
};