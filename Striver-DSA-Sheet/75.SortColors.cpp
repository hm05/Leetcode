class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> color (3,0);
        for(int num : nums){
            if(num == 0){
                color[0]++;
            }
            else if(num == 1){
                color[1]++;
            }
            else{
                color[2]++;
            }
        }
        int i = 0;
        for(; i < color[0]; i++){
            nums[i] = 0;
        }
        for(; i < color[0]+color[1]; i++){
            nums[i] = 1;
        }
        for(; i < color[0]+color[1]+color[2]; i++){
            nums[i] = 2;
        }
    }
};

// Status - Accepted
