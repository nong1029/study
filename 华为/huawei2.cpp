#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;
const int MAX_N = 10000;
int n, edge, block;
vector<int> tree[MAX_N];
bool block_nodes[MAX_N];
bool visited[MAX_N];
struct Node {
    int id;
    vector<int> path;
};
string shortest_path() {
    memset(visited, false, sizeof(visited));
    visited[0] = true;
    queue<Node> q;
    q.push({0, {0}});
    while (!q.empty()) {
        Node cur = q.front();
        q.pop();
        if (tree[cur.id].size() == 1 && cur.id != 0) {
            string result;
            for (int i = 0; i < cur.path.size(); i++) {
                result += to_string(cur.path[i]);
                if (i != cur.path.size() - 1) {
                    result += "->";
                }
            }
            return result;
        }
        for (int next : tree[cur.id]) {
            if (!visited[next] && !block_nodes[next]) {
                visited[next] = true;
                vector<int> new_path = cur.path;
                new_path.push_back(next);
                q.push({next, new_path});
            }
        }
    }
    return "NULL";
}

int main() {
    cin >> n >> edge;
    for (int i = 0; i < edge; i++) {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    cin >> block;
    for (int i = 0; i < block; i++) {
        int x;
        cin >> x;
        block_nodes[x] = true;
    }
    for (int i = 0; i < n; i++) {
        sort(tree[i].begin(), tree[i].end());
    }
    cout << shortest_path() << endl;
    return 0;
}