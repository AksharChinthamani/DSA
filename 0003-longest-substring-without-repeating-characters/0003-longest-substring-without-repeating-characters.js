/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let map = new Map();
    let start = 0, ans = 0;
    
    for (let i = 0; i < s.length; i++) {
        if (map.has(s[i]) && map.get(s[i]) >= start) {
            start = map.get(s[i]) + 1;
        }
        map.set(s[i], i);
        ans = Math.max(ans, i - start + 1);
    }
    
    return ans;
};
