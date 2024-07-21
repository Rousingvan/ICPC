#include <bits/stdc++.h>
using namespace std;

int minPresses(int N, int ST, int EN, int u, int d) {
    if (ST == EN) return 0;

    vector<int> visited(N + 1, -1);
    queue<int> q;
    q.push(ST);
    visited[ST] = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // Nút "UP u"
        int nextUp = current + u;
        if (nextUp <= N && visited[nextUp] == -1) {
            visited[nextUp] = visited[current] + 1;
            if (nextUp == EN) return visited[nextUp];
            q.push(nextUp);
        }

        // Nút "DOWN d"
        int nextDown = current - d;
        if (nextDown >= 1 && visited[nextDown] == -1) {
            visited[nextDown] = visited[current] + 1;
            if (nextDown == EN) return visited[nextDown];
            q.push(nextDown);
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, ST, EN, u, d;
    cin >> N >> ST >> EN >> u >> d;

    cout << minPresses(N, ST, EN, u, d) << endl;

    return 0;
}

