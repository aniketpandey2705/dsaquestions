class Solution {
public:
    int missingNumber(vector<int>& nums) {  
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int miss;
        for(int i = 1; i<n; i++){
            nums[i]=nums[i]+nums[i-1];
        }

        miss=sum-nums[n-1];
        return miss;
    }
};























        // vector<int> count(nums.size(), 0);
        // int missing=0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == 0) {
        //         continue;
        //     } else {
        //         count[nums[i] - 1] += 1;
        //     }
        // }
        // for (int i = 0; i < count.size(); i++) {
        //     if (count[i] == 0) {
        //         missing = i + 1;
        //     }
        // }
        // return missing;