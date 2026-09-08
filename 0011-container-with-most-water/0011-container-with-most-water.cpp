class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int count = 0; 
        while(i < j){
            int x = min(height[i], height[j]);
            int y = j-i;
            count = max(count, (x*y));
            if(height[i] < height[j]){
               i++;
            }else{
                j--;
            }

            

        }
        return count;
    }
};