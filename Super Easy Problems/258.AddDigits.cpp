/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Example 1:
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Example 2:
Input: num = 0
Output: 0
*/

#include<iostream>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        while (num>=10)
        {
            int a = 0;
            while(num > 0){
            a += num%10;
            num /= 10;
            }
            num = a;
        }
        return num;
    }
};
int main(){
    Solution sol;
    int num = sol.addDigits(99);
    cout << "Single digit output is :" << num;
    return 0;
}