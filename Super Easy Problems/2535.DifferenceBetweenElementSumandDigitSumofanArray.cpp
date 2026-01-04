#include<iostream>
#include<vector>

using namespace std;

class Solution {
    int getSum(int num){
        // int n = num;
        int sum = 0;
        while(num){
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int diff;
        int elesum = 0;
        int digsum = 0;
        for(int num : nums){
            elesum += num;
        }
        for(int num : nums){
            if(num > 9){
                digsum += getSum(num);
            }
            else{
                digsum += num;
            }
        }
        diff = elesum - digsum;
        if(diff < 0){
            diff = -diff;
        }
        return diff;
    }
};

int main(){
    vector<int> nums = {1, 15, 6, 3};
    Solution sol;
    cout << sol.differenceOfSum(nums);
    return 0;
}

//Expected answer - 9