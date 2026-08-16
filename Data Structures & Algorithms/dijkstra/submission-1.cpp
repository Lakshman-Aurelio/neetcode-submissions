class Solution {
public:
    unordered_map<int, int> shortestPath(int n, vector<vector<int>>& edges, int src) {
        unordered_map<int, int> ans;
        vector<vector<pair<int, int>>> v(n, vector<pair<int, int>>());
        for(vector<int>& vi : edges){
            v[vi[0]].push_back({vi[1], vi[2]});
        }
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<>> pq;
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        pq.push({0,src});
        while(!pq.empty()){
            auto [d, u] = pq.top(); pq.pop();
            if(d > dist[u]) continue;

            for(auto [vert, w] : v[u]){
                if(dist[u] + w < dist[vert]){
                    dist[vert] = dist[u] + w;
                    pq.push({dist[vert], vert});
                }
            }
        }
        for(int i = 0; i < n; ++i){
            if(dist[i] != INT_MAX)
            ans[i] = dist[i];
            else
            ans[i] = -1;
        }

        return ans;
    }
};
