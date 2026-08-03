class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int lar_sum = 0;
      int max_sum = INT_MIN;

      for(auto value : nums){
        lar_sum += value;
        max_sum = max(lar_sum, max_sum);
        
        if(lar_sum < 0){
            lar_sum = 0;
        }

      } 
      return max_sum;
    }
};