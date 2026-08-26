class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        map<int,int> sorting;

        for(int i=0;i<m;i++){ 
            // pushing nums1 element in map
            sorting[nums1[i]]++;
        }
        for(int i=0;i<n;i++){ 
            //pushing nums2 element in map
            sorting[nums2[i]]++;
        }
        nums1.clear();
        
        for (auto& pair : sorting) {
            while(pair.second!=0){
                nums1.push_back(pair.first);
                pair.second--;
            }

        }
    }
};