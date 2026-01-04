#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int divisor = 0;
        while(n){
            int temp = n%10;
            n/=10;
            if(num % temp == 0){
                divisor++;
            }
        }
        return divisor;
    }
};

int main(){
    Solution sol;
    cout << sol.countDigits(121);
    return 0;
}

// status - Accepted