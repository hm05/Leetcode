#include<iostream>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for(string operation : operations){
            if(operation == "C"){
                scores.pop_back();
            }
            else if(operation == "D"){
                scores.insert(scores.end(), scores.back()*2);
            }
            else if(operation == "+"){
                scores.insert(scores.end(), scores.at(scores.size()-2) + scores.back());
            }
            else{
                scores.insert(scores.end(), stoi(operation));
            }
        }
        int total = 0;
        for(int score : scores){
            total += score;
        }
        return total;
    }
};

int main(){
    vector<string> operations = {"5", "2", "C", "D", "+"};
    Solution sol;
    cout << sol.calPoints(operations);
    return 0;
}

// Expected answer - 30