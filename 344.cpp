// 344. Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int len = s.size();

        for(int i = 0; i < len / 2; ++i){
            temp = s[i];
            s[i] = s[len - i - 1];
            s[len - i - 1] = temp;
        }
    }
};