class Solution {
public:


    bool check(vector<int>& nums) {
        vector<int>originalSorted(nums);
        sort(originalSorted.begin(), originalSorted.end());
        int key=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]<nums[i]){
                key =i+1;
            }
        }
    

        for(int i=0; i<nums.size(); i++){
            if(nums[(i+key)%nums.size()]!=originalSorted[i])return false;
        }

        return true;
    }
};

/*
class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> B(nums);
        sort(B.begin(), B.end());

        int ptr=0;
        int sortcount=0;
        for(int i = 1;i<nums.size()-2;i++){
            if(nums[ptr]<=nums[i]){
                ptr++;

            }
            else{
                
                sortcount++;
                ptr++;

            }
        }
        if(sortcount>2){
            return false;
        }
    
    return true;
    }
};
*/