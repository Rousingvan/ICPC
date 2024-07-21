#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int m;
    cin >> s;
    cin >> m;
    int n = s.length();
    vector<int> flip_count(n + 1, 0);

   
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        flip_count[x - 1]++;
        flip_count[n - x + 1]--;
    }

   
    int flip = 0;
    for (int i = 0; i < n / 2; i++) {
        flip += flip_count[i];
        if (flip % 2 == 1) {
            swap(s[i], s[n - i - 1]);
        }
    }

    cout << s;
    return 0;
}

