class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        vector<int>temp = flips;
        sort(temp.begin(), temp.end());
        
        int ans = 0;
        int sum = 0;
        int sum_temp = 0;
        for(int i = 0; i<flips.size(); i++){
            sum += flips[i];
            sum_temp += temp[i];
            if(sum == sum_temp){
                ans++;
            }
        }
        return ans;
    }
};