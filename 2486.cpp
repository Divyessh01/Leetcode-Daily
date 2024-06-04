// 2486. Append Characters to String to Make Subsequence
// Approach: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/solutions/5255317/easy-c/

class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0;
        int n = t.length();
        for(char c: s){
            if(c == t[i]) ++i;

            if(i == n) return 0;
        }

        return (n - i);
    }
};