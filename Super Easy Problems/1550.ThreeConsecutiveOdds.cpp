#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odds = 0;
        for(int num : arr){
            if(num % 2){
                odds++;
                if(odds >= 3){
                    return true;
                }
            }
            else{
                odds = 0;
            }
        }
        return false;
    }
};

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Solution sol;
    cout << sol.threeConsecutiveOdds(arr);
    return 0;
}