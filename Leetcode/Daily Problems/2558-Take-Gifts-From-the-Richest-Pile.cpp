class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum = 0;
        priority_queue<int> pq;
        for(int& gift: gifts) {
            sum += gift;
            pq.push(gift);
        }
        while(k--) {
            int picked = pq.top();
            pq.pop();
            int remain = floor(sqrt(picked));
            sum -= (picked - remain);
            pq.push(remain);
        }
        return sum;
    }
};