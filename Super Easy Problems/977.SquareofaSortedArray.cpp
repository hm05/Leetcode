#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] *= nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main (){
    Solution sol;
    vector<int> nums = {-4, -3, 0, 1, 2};
    nums = sol.sortedSquares(nums);
    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}
// Expected Answer - 0 1 4 9 16