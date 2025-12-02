class Solution {
public:
    int maxProfit(vector<int>& prices) {
        unordered_map<int, int> map;
        map[1] = prices[0];
        map[2] = prices[0];
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < map[1]){
                map[1] = prices[i];
                map[2] = prices[i];
            }
            else if(prices[i] > map[2]){
                map[2] = prices[i];
            }
        }
        int res = map[2] - map[1];
        return res;
    }
};

// Attempt 1 - unsuccessfull 
