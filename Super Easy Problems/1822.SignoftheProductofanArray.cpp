#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        if(find(nums.begin(), nums.end(), 0) != nums.end()){
            return 0;
        }
        int n = nums.size();
        int negatives = 0;
        sort(nums.begin(), nums.end());
        for(int num : nums){
            if(num < 0){
                negatives++;
            }
        }
        if(negatives % 2){
            return -1;
        }
        return 1;
    }
};

int main(){
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    Solution sol;
    cout << sol.arraySign(nums);
    return 0;
}

// Expected answer - 1