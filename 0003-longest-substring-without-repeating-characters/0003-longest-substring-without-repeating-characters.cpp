class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int left = 0;
        int maxi = 0;
        unordered_map<char, int> charc;
        for (int i = 0; i < s.length(); i++) {
            while (charc.find(s[i]) != charc.end()) {
                charc.erase(s[left]);
                left++;
            }
            charc[s[i]] = i;
            maxi = max(maxi, (int)charc.size());
        }
        return maxi;
    }
}
;