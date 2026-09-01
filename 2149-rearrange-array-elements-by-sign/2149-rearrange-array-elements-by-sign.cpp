class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> newarr;
        int n= nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }
        
    
    for(int i = 0; i<n/2;i++){
        newarr.push_back(positive[i]);
        newarr.push_back(negative[i]);
    }
    return newarr;
    }
};