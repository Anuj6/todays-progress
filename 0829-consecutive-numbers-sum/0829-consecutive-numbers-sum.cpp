class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int ans  = 0;
        
        for(int k = 1; 2*n > (k * (k-1)); k++){
            
            int num = n - (k * (k-1))/2;
            
            if(num%k == 0){
                ans++;
            }
        }
        return ans;
    }
};