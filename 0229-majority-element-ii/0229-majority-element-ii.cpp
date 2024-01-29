class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // boyer moore's algorithm 
        int count1 = 0; int count2 = 0;
        int candi1 = 0; int candi2 = 0; //potential candidates
        
        // for finding the potential candidates in majority element
        for(int i = 0; i<nums.size(); i++){
            // for can1 
            if(count1 == 0 && nums[i] != candi2){
                count1 = 1;
                candi1 = nums[i];
            }
            else if(count2 == 0 && nums[i] != candi1){
                count2 = 1;
                candi2 = nums[i];
            }
            else if(nums[i] == candi1){
                count1++;
            }
            else if(nums[i] == candi2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        count1 = 0;
        count2 = 0;
        vector<int>ans;
        int thres = size(nums)/3;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == candi1){
                count1++;
                
            }
            else if(nums[i] == candi2){
                count2++;
                
            }
            
        }
        if(count1 > thres){
                    ans.push_back(candi1);
                }
        if(count2 > thres){
                    ans.push_back(candi2);
                }
        // if(ans.size() == 2 && ans[0] == ans[1]){
        //     ans.pop_back();
        // }
        return ans; 
    }
};