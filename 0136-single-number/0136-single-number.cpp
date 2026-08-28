class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num:nums) {
            freq[num]++;
        }
        auto it = find_if(freq.begin(), freq.end(),[](const auto& p) { return p.second==1; });
        return it->first;
    }
};