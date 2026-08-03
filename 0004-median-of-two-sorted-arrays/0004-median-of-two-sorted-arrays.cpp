class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int i = 0; 
        int j = 0;
        int a = nums1.size();
        int b = nums2.size();
        while(i<a && j<b){
            if(nums1[i] < nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
                }
        }
        while(i<a){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<b){
           nums3.push_back(nums2[j]);
            j++;  
        }
        int sum_s = nums3.size();
       if(sum_s % 2 == 1){
            return nums3[sum_s / 2];
        } else {
            return (nums3[(sum_s / 2) - 1] + nums3[sum_s / 2]) / 2.0;
        }
        
    }
};