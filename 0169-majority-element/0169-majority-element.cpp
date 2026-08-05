class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int number = 0;
        int count = 0;
        for(int n : nums){
            if(count == 0){
                number = n;

            }
            if(n == number){
                count ++;
            }
            else{
                count--;
            }
        }

      return number;  
    } 
};