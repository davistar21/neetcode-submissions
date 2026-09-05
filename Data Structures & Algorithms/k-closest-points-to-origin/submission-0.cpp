class Solution {
   private:
    int dist(vector<int>& point) {
        int x = point[0];
        int y = point[1];
        return x * x + y * y;
    }

   public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> pq;

        for (int i = 0; i < points.size(); i++) {
            int distance = dist(points[i]);
            pq.push({distance, i});
            if (pq.size() > k) pq.pop();
        }
        vector<vector<int>> result;
        while (!pq.empty()) {
            auto top = pq.top();
            result.push_back(points[top[1]]);
            pq.pop();
        }
        return result;
    }
};
