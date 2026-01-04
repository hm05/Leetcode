#include<iostream>
#include<vector>

using namespace std;

class Solution1 {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> n;
        int size = words.size();
        for(int i = 0; i < size; i++){
            for(char c : words[i]){
                if(c == x){
                    n.push_back(i);
                    break;
                }
            }
        }
        return n;
    }
};

class Solution2 {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> n;
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != string::npos) {
                n.push_back(i);
            }
        }
        return n;
    }
};

int main(){
    Solution1 sol1;
    Solution2 sol2;

    vector<string> words1 = {"leet", "code"};
    vector<string> words2 = {"abc", "bcd", "aaaa", "cbc"};

    vector<int> num1 = sol1.findWordsContaining(words1, 'e');
    vector<int> num2 = sol2.findWordsContaining(words2, 'a');

    for(int num : num1){
        cout << num << " ";
    }
    cout << endl;
    for(int num : num2){
        cout << num << " ";
    }
    return 0;
}

//Expected answer - [0, 1] [0, 2]