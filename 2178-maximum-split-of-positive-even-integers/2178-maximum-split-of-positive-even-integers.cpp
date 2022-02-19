class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        //if the no is odd then return empty fucking verctor
        if(finalSum%2!=0){
            return {};
        }
        //this will track the sum of my nos.
        long long sum=0;
        //this will track the current even no. i will be entering
        long long crsum=2;
        vector<long long>ans;
        
        while(sum+crsum<=finalSum){
            //now start adding to your fucking vector of ans
            ans.push_back(crsum);
            sum +=crsum;
            crsum +=2;
        }
        if(sum<finalSum){
            ans[ans.size()-1] +=finalSum-sum;
        }
        return ans;
    }
};