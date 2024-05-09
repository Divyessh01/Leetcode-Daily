// 3075. Maximize Happiness of Selected Children

// Approach: https://leetcode.com/problems/maximize-happiness-of-selected-children/solutions/5136740/basic-intuition-sort-and-take-out-maximum-each-time-greedily/

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // sort
        sort(happiness.begin(), happiness.end(), greater<int>());

        // filter
        long long answer = 0;
        int count = 0;
        for(int i = 0; i < happiness.size() && k; ++i, --k, ++count){
            int temp = happiness[i] - count;
            answer += ((temp > 0) ? temp : 0);
        }

        // return results
        return answer;
    }
};