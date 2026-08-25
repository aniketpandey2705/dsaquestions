class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotated(nums.size());
        for(int i =0;i<nums.size();i++){
            rotated[(i+k)%rotated.size()]=nums[i];
        }
        nums=rotated;
    }
};