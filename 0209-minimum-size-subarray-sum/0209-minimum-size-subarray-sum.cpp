class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int sum=0;
        int len=nums.size()+1;
        while(right<nums.size()){
            sum+=nums[right];
            while(sum>=target){
                len=min(len,right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;
            
        }

        if( len == nums.size()+1) return 0;
        return len;
    }
};
