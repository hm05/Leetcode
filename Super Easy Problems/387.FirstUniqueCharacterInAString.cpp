/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
Input: s = "leetcode"
Output: 0
Explanation:
The character 'l' at index 0 is the first character that does not occur at any other index.

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++){
            freq[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++){
            if (freq[s[i]] == 1)
            {
                return i; 
            }
        }
        return -1;
    }
};
class bestSolution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};
        for(char c:s){
            if(c >= 97){
                freq[c-'a']++;
            }
            else{
                freq[c-'A']++;
            }
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    Solution sol;
    int result = sol.firstUniqChar("bebeginner");
    cout << result << endl;
    return 0;
}

// Expected Output - 4