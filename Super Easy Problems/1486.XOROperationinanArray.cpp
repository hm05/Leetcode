#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int res;
        res = start;
        start = start + 2;
        for(int i = 0; i < n - 1; i++){
            res ^= start;
            start = start + 2;
        }
        return res;
    }
};

int main(){
    Solution sol;
    cout << sol.xorOperation(5, 0);
    return 0;
}

// Expected Output - 8