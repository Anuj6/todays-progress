class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=1e9;
        
        while(low<=high){
            //koko wants banana what is the rate
            int mid=low+ (high-low)/2;
            //for time taken at a particualr speed
            int time_taken=0;
            for(int i=0; i<piles.size(); i++){
                time_taken += ceil(1.0* piles[i]/mid);
            }
            // we can use time taken as criteria for decreasing the areaa to be serached
            if(time_taken>h){
                //speed is too slow
                low=mid+1;
            }
            
            else{
                high=mid-1;
            }
        }
        
        return low;
    }
};