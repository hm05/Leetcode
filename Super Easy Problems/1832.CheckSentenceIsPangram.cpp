/*
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:
Input: sentence = "leetcode"
Output: false
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int map[26] = {0};
        int flag = 0;
        for(int i = 0; i < sentence.size(); i++){
            if(map[sentence[i]-'a'] == 0) flag++;
            map[sentence[i]-'a']++;
        }
        if (flag == 26) return true;
        return false;
    }
};

int main(){
    Solution sol;
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    bool ans = sol.checkIfPangram(sentence);
    cout << ans;
    if(sol.checkIfPangram(sentence)) cout << "true";
    else cout << "false";
    return 0;
}

// Expected answer - true