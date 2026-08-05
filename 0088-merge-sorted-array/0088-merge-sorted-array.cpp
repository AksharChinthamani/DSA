class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> new_arr;
        int i = 0;
        int j = 0;
        while(i<m and j< n){
            if(nums1[i] < nums2[j]){
                new_arr.push_back(nums1[i]);
                i++;
            }
            else{
                new_arr.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i<m){
               new_arr.push_back(nums1[i]);
                i++;
            }
            while(j<n){
                new_arr.push_back(nums2[j]);
                j++;

            }
        
            for(int a = 0; a < (m+n); a++){
                nums1[a] = new_arr[a];

            }
    }
};