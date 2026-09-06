class Solution {
public:
    int hammingWeight(int n) {
        string binary_str = bitset<32>(n).to_string();
        int count=0;
        for(int i=0;i<binary_str.length();i++){
            if(binary_str[i]=='1'){
                count++;
            }
        }
    return count;
    }
};