// 409. Longest Palindrome
// Approach: https://leetcode.com/problems/longest-palindrome/solutions/5255292/c-intuitive/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); ++i){
            mp[s[i]]++;
        }

        int answer = 0;
        bool is_any_odd = false;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if((it->second & 1) == 1){
                answer += it->second / 2;
                is_any_odd = true;
            } else {
                answer += it->second / 2;
            }
        }

        answer <<= 1;
        if(is_any_odd)  answer++;

        return answer;
    }
};