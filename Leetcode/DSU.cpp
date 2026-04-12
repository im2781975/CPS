https://leetcode.com/problems/number-of-provinces/
class 547 {
    public:
    vector<int> parent, rank;
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    void unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return;
        if (rank[px] < rank[py]) parent[px] = py;
        else if (rank[px] > rank[py]) parent[py] = px;
        else { parent[py] = px; rank[px]++; }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        parent.resize(n); rank.resize(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
        
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (isConnected[i][j]) unite(i, j);
        
        unordered_set<int> roots;
        for (int i = 0; i < n; i++) roots.insert(find(i));
        return roots.size();
    }
};
