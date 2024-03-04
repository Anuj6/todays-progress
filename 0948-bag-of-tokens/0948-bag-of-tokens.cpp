class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n = tokens.size();
        int score = 0,ms=0;
        int i=0,j=n-1;
        while(i<=j){
            //faceup
            if(power>=tokens[i]){
                power -= tokens[i];
                score++;
                i++;
                
            }
            //face down
            else if(score > 0){
                power += tokens[j];
                score--;
                j--;
            }else{
                break;
            }
            ms = max(ms,score);
        }
        return ms;
    }
};