class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int sum =0;
    int minlength = INT_MAX;
    int l =0;
    for(int r =0; r<n; r++){
        sum+=nums[r];
        while(sum>=target){
            minlength = min(minlength,r-l+1);
            sum -=nums[l];
            l++;
        }
       
    }
    if (minlength == INT_MAX)
            return 0;
     return minlength;
}
};