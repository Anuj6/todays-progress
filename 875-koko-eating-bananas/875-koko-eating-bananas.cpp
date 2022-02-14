class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=1e9;
        
        if(h<piles.size()){
            return -1;
        }
        //now binary search
        while(low<=high){

            int k=(low+high)/2;
            int H=0;
            for(int i=0; i<piles.size(); i++){

                H +=ceil(1.0 *piles[i]/k);
            }
            // you are too slow
            if(H>h){

                low=k+1;
            
            }
            //you are too fast
            else{
                high=k-1;
            }
        }
        return low;
    }
};




 