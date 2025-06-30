class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int max_length=0;
        unordered_map<char,int>m;
        while(j<s.length()){
            if(m.find(s[j])==m.end()){
                m[s[j]]++;
                j++;
                 int length = j - i;
                max_length = max(max_length, length);
            }else{
             
                i=i+1;
                m.clear();
                j=i;
            }
        }
        return max_length;
        
    }
};
