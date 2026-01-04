#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int meet = 0;
        for(int hour : hours){
            if(hour >= target){
                meet++;
            }
        }
        return meet;
    }
};

int main(){
    Solution sol;
    vector<int> hours = {0,1,2,3,4};
    cout << sol.numberOfEmployeesWhoMetTarget(hours, 2);
    return 0;
}

// Status - Accepted