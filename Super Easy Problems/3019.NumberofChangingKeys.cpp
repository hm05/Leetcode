#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n = s.length();
        int res = 0;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                res++;
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    cout << sol.countKeyChanges("HeLloWoRld");
}

// Expected Answer - 8