class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int low = 0, high = tokens.size()-1, score = 0;
        while(low<=high){
            if(power>=tokens[low]){
                score++;
                power-=tokens[low];
                low++;
            }else if(low < high && score > 0){
                score--;
                power+=tokens[high];
                high--;
            }else{
                return score;
            }
        }
        return score;
    }
};