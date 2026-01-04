class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int sum = 0;
        
        for(int num : nums){
            set<int> divisor;
            divisor.insert(1);
            divisor.insert(num);            

            for(int i = 2; i * i <= num; i++){
                if(num % i == 0){
                    divisor.insert(i);
                    divisor.insert(num/i);
                }
            }

            if(divisor.size() == 4){
                for(int num : divisor){
                    sum+=num;
                }
            }
        }
        return sum;
    }
};

// Status - Accepted