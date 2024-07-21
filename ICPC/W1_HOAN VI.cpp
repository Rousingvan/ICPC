#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;
    long long totalSum = 0;
    for (long long i = 1; i <= N; ++i) {
        totalSum += (i - 1);
    }

    cout << totalSum << endl;

    return 0;
}

