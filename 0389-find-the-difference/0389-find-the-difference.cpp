class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map<char,int> s1;
         char c1;
         bool flag=true;
        // for(int i =0;i<s.length();i++){
        //     s1[s[i]]=i;
        // }
        // for(int i=0;i<t.length();i++){
        //     if(s1.find(t[i])==s1.end()){
        //         c1=t[i];
        //     }
        // }
        // return c1;

        int freq[26] = {};
        for (char c : s)
            freq[c - 'a']++;
        for (char c : t) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0)
                return c;
        }

        return '\0';
    }
};