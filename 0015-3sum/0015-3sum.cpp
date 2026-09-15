class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Since array is sorted, no possible triplet
            if (nums[i] > 0)
                break;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    while (left < right && nums[left] == nums[left + 1])
                        left++;

                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};


// // brute
//         int n = nums.size();
//         set<vector<int>> s1;
//         for (int i = 0; i < n; i++) {

//             for (int j = i + 1; j < n; j++) {
//                 for (int k = j + 1; k < n; k++) {
//                     if (nums[i] + nums[j] + nums[k] == 0) {
//                         vector<int> ans;
//                         ans.push_back(nums[i]);
//                         ans.push_back(nums[k]);
//                         ans.push_back(nums[j]);
//                         sort(ans.begin(), ans.end());
//                         s1.insert(ans);
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> result(s1.begin(), s1.end());

//         return result;



// better

        // int n = nums.size();

        // set<vector<int>> s1;
        // for (int i = 0; i < n; i++) {
        //     unordered_map<int,int> unique;
        //     for (int j = i + 1; j < n; j++) {
        //         int third = -(nums[i] + nums[j]);
        //         if (unique.find(third) != unique.end()) {
        //             vector<int> ans = {nums[i], nums[j], third};
        //             sort(ans.begin(), ans.end());
        //             s1.insert(ans);
        //         }
        //         unique[nums[j]]=j;
        //     }
        // }

        // vector<vector<int>> result(s1.begin(), s1.end());

        // return result;