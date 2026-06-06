//Reusable disjoint set data structure 

class DisJointSet {
public:
    vector<int> rank;
    vector<int> parent;
    vector<int> size;

    DisJointSet(int n) {
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        parent.resize(n + 1);

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUParent(int node) {
        if (parent[node] == node)
            return node;

        return parent[node] = findUParent(parent[node]);
    }

    void unionByRank(int u, int v) {
        int upu = findUParent(u);
        int upv = findUParent(v);

        if (upu == upv) return;

        if (rank[upu] < rank[upv]) {
            parent[upu] = upv;
        }
        else if (rank[upu] > rank[upv]) {
            parent[upv] = upu;
        }
        else {
            parent[upv] = upu;
            rank[upu]++;
        }
    }

    void unionBySize(int u, int v) {
        int upu = findUParent(u);
        int upv = findUParent(v);

        if (upu == upv) return;

        if (size[upu] < size[upv]) {
            parent[upu] = upv;
            size[upv] += size[upu];
        }
        else {
            parent[upv] = upu;
            size[upu] += size[upv];
        }
    }
};