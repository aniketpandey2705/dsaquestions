class Solution {
public:
    int reverseBits(int n) {
        bitset<32> bin_num(n);
        string str = bin_num.to_string();
        reverse(str.begin(), str.end());
        bitset<32> reversed_bits(str);
        signed long ans = reversed_bits.to_ulong();
    return ans;
    }
};