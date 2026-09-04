class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=0;
        int mini=nums.size()+1;
        for(int i =0; i< nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=*min_element(nums.begin()+i,nums.end());
            if((maxi-mini)<=k){
                return i;
            }
        }
    return -1;
    }
};