/*
You are given an array of positive integers nums.
Alice and Bob are playing a game. In the game, Alice can choose either all single-digit numbers or all double-digit numbers from nums, and the rest of the numbers are given to Bob. Alice wins if the sum of her numbers is strictly greater than the sum of Bob's numbers.
Return true if Alice can win this game, otherwise, return false.

Example 1:
Input: nums = [1,2,3,4,10]
Output: false
Explanation:
Alice cannot win by choosing either single-digit or double-digit numbers.
Example 2:
Input: nums = [1,2,3,4,5,14]
Output: true
Explanation:
Alice can win by choosing single-digit numbers which have a sum equal to 15.
Example 3:
Input: nums = [5,5,5,25]
Output: true
Explanation:
Alice can win by choosing double-digit numbers which have a sum equal to 25.
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    bool canAliceWin(vector<int>& nums){
        int singleDigit = 0;
        int doubleDigit = 0;
        for (int element : nums){
            if(element < 10) singleDigit += element;
            else doubleDigit += element;
        }
        if(singleDigit == doubleDigit) return false;
        else return true;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {5,5,5,25};
    if(sol.canAliceWin(nums)) cout << "true";
    else cout << "false";
    return 0;
}
