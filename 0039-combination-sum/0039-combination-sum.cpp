class Solution {
public:
    void f(vector<int>& a, int t, vector<int>& cur, vector<vector<int>>& ans, int i) {
        if (t == 0) {
            ans.push_back(cur);
            return;
        }
        for (int j = i; j < a.size(); j++) {
            if (a[j] <= t) {
                cur.push_back(a[j]);
                f(a, t - a[j], cur, ans, j);
                cur.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        vector<vector<int>> ans;
        vector<int> cur;
        f(a, t, cur, ans, 0);
        return ans;
    }
};

