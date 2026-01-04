class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> unique;
        for(int num : nums){
            if(unique.contains(num)){
                return num;
            }
            else{
                unique.insert(num);
            }
        }
        return -1;
    }
};

// Status - Accepted