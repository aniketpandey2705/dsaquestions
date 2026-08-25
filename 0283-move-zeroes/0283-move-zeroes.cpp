class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptrnum=0;
        int ptrzero=0;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]==0){
                ptrnum++;
            }
            else{
                swap(nums[ptrzero], nums[i]);
                ptrzero++;
            }
        }
        

    }
};


    //    vector<int> ans;
    //     int count = 0;
    //     if (nums.size() == 1);
    //     else {
    //         for (int i = 0; i < nums.size(); i++) {
    //             if (nums[i] == 0) {
    //                 count++;
    //                 continue;
    //             } else {
    //                 ans.push_back(nums[i]);
    //             }
    //         }
    //         ans.insert(ans.begin() + (ans.size()), count, 0);
    //         nums.clear();
    //         nums = ans;
    //         ans.clear();
    //     }