#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; 
        }
        int max_gcd = 1;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int current_gcd = gcd(A[i], A[j]);
                if (current_gcd > max_gcd) {
                    max_gcd = current_gcd;
                }
            }
        }

        cout << max_gcd << endl; 
    }
    return 0;
}

