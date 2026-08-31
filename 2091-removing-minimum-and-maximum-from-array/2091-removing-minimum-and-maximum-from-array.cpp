class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        auto mini = min_element(nums.begin(), nums.end());
        auto maxi = max_element(nums.begin(), nums.end());
        int n=nums.size(), result=0;
        int front=0, back=0, both=0;
        int minindex = distance(nums.begin(), mini);
        int maxindex = distance(nums.begin(), maxi);

        front=max(minindex,maxindex)+1;
        back=n-(min(minindex,maxindex));
        both=min(minindex, maxindex)+1;
        both+=(n-(max(minindex, maxindex)));

        if(n==1) return 1;
        result= min(front, back);
        result=min(result, both);
        return result;
    }
};