// 1002. Find Common Characters

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<string> answer;        

        for(int i = 0; i < 256; ++i){
            int min_freq = INT_MAX;
            for(string word: words){
                int curr_freq = 0;
                for(char c: word){
                    if(c == char(i))
                        curr_freq++;
                }

                min_freq = min(curr_freq, min_freq);
            }

            while(min_freq--){
                string s;
                s = char(i);
                answer.push_back(s);
            }
        }

        return answer;
    }
};