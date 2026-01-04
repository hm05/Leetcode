#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1;
        int sum = 0;
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[i].size(); j++){
                sum+=accounts[i][j];
            }
            if(sum > max){
                swap(sum, max);
            }
            sum = 0;
        }
        return max;
    }
};

int main(){
    vector<vector<int>> accounts = {{1,2,3}, {3,4,5}, {5,6,7}};
    Solution sol;
    cout << sol.maximumWealth(accounts);
    return 0;
}

//Expected Answer - 18