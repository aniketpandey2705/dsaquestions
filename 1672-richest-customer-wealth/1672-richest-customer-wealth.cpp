class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximumsalary=0;
        for(int i =0;i<accounts.size();i++){
            maximumsalary = max(maximumsalary, accumulate(accounts[i].begin(), accounts[i].end(), 0));
        }

        return maximumsalary;
    }
};