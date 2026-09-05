class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int mininum=nums[n-1];
        int maxnum=0;
        vector<int> mini(n,0);
        vector<int> maxi(n,0);
        for(int i=0;i<n;i++){
            maxnum=max(nums[i],maxnum);
            maxi[i]=maxnum;
        }
        for(int i=n-1;i>=0;i--){
            mininum=min(nums[i], mininum);
            mini[i]=mininum;
        }
        for(int i=0; i<n;i++){
            if(k >= (maxi[i]-mini[i])){
                return i;
            }
        }
    return -1;
    }
};