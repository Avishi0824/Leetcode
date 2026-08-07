class Solution {
public:
    int minBuildTime(vector<int>& blocks, int split) {
        priority_queue<int, vector<int>, greater<int>> pq;

        // Put all block times into min-heap
        for (int time : blocks) {
            pq.push(time);
        }

        // Combine two smallest blocks/workloads
        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();

            int b = pq.top();
            pq.pop();

            // Splitting takes 'split' time.
            // Both workers work in parallel,
            // so we take the maximum of the two times.
            int combined = max(a, b) + split;

            pq.push(combined);
        }

        return pq.top();
    }
};