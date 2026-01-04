#include<iostream>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int pos[] = {0,0};
        for(char move:moves){
            if(move == 'U'){
                pos[1]++;
            }
            else if(move == 'D'){
                pos[1]--;
            }
            else if(move == 'R'){
                pos[0]++;
            }
            else if(move == 'L'){
                pos[0]--;
            }
        }
        if(pos[0] == 0 && pos[1] == 0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    string moves = "UD";
    Solution sol;
    cout << sol.judgeCircle(moves);
    return 0;
}

// Expected answer - true (1)