#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = n;
        int product = 1;
        int sum = 0;
        while(num){
            product *= num % 10;
            num/=10;
        }
        num = n;
        while(num){
            sum += num % 10;
            num/=10;
        }
        int res = product - sum;
        return res;
    }
};

int main(){
    Solution sol;
    cout << sol.subtractProductAndSum(234);
    return 0;
}