// 1052. Grumpy Bookstore Owner

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int answer = 0;

        for(int i = 0; i < customers.size(); ++i){
            if(!grumpy[i])  answer += customers[i];
        }

        int maxi = 0, curr = 0;
        for(int i = 0; i < customers.size(); ++i){
            if(grumpy[i])  curr += customers[i];
            if(i >= minutes){
                if(grumpy[i - minutes]) curr -= customers[i - minutes];
            }

            maxi = max(curr, maxi);
        }

        answer += maxi;
        return answer;
    }
};