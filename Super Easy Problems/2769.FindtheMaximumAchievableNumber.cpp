#include<iostream>

using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int res = num + (2*t);
        return res;
    }
};

int main(){
    Solution sol;
    cout << sol.theMaximumAchievableX(4, 1);
    return 0;
}

// Expected answer - 6