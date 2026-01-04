#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};

int main(){
    Solution sol;
    string s = "Hello World";
    cout << sol.toLowerCase(s);
    return 0;
}

//Expected answer - hello world