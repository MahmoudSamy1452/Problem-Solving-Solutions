class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n);
        for(auto& road: roads) {
            adj[road[0]].push_back({road[1], road[2]});
            adj[road[1]].push_back({road[0], road[2]});
        }

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
        vector<long long> shortest_distance(n, LLONG_MAX); vector<int> count(n, 0);
        shortest_distance[0] = 0, count[0] = 1;
        pq.push({0, 0});
        while(!pq.empty()) {
            pair<long long, int> top = pq.top(); pq.pop();
            long long distance = top.first, node = top.second;
            if(distance > shortest_distance[node]) continue;
            for(auto& [neighbor, dist]: adj[node]) {
                if(distance + dist < shortest_distance[neighbor]) {
                    shortest_distance[neighbor] = distance + dist;
                    count[neighbor] = count[node];
                    pq.push({shortest_distance[neighbor], neighbor});
                } else if (distance + dist == shortest_distance[neighbor]) {
                    count[neighbor] = (count[neighbor] + count[node]) % 1000000007;
                }
            }
        }

        return count[n-1];
    }
};