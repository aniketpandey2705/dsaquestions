class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                count1++;
            if (nums[i] == 2)
                count2++;
            if (nums[i] == 0)
                count0++;
        }
        int i=0;
        while(i<nums.size()){
            while(count0!=0){
                nums[i]=0;
                count0--;
                i++;
            }
            while(count1!=0){
                nums[i]=1;
                count1--;
                i++;
            }
            while(count2!=0){
                nums[i]=2;
                count2--;
                i++;
            }            
        }
    }
};