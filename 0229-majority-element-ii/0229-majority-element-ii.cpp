class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            auto it = find(ans.begin(), ans.end(), nums[i]);
            if (it != ans.end()) {
                continue;
            } else {
                count=0;
                for (int j = 0; j < n; j++) {
                    if (nums[i] == nums[j]) {
                        count++;
                    }
                }
            }
            if (count > n / 3) {
                ans.push_back(nums[i]);
                count = 0;
            }
            if (ans.size() == 2) {
                break;
            }
        }
        return ans;
    }
};