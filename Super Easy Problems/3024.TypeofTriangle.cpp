#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums[0] + nums[1] <= nums[2]) return "none";
        if (nums[0] == nums[2]) return "equilateral";
        if (nums[0] == nums[1] || nums[1] == nums[2]) return "isosceles";
        return "scalene";
    }
};


int main(){
    vector<int> nums = {3,3,3};
    Solution sol;
    cout << sol.triangleType(nums);
    return 0;
}

// Expected answer - equilateral