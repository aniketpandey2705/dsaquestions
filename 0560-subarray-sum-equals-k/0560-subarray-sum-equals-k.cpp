class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, int> summap;
        long long sum = 0, rem = 0;
        int count=0;
        summap[0]=1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            rem = sum - k;
            count +=summap[rem];
            // if (summap.find(rem) != summap.end()) {
            //     summap[rem]++;
            // }
            summap[sum]++;

        }
        return count;
    }
};