#include <bits/stdc++.h>
using namespace std;

bool isValidNumber(const string& num) {
    long long number = stoll(num);
    return number > 2147483647 && number <= 9223372036854775807;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    long long totalSum = 0;
    while (getline(cin, line)) {
        stringstream ss(line);
        string token;
        while (ss >> token) {
            if (isdigit(token[0])) {
                try {
                    if (isValidNumber(token)) {
                        totalSum += stoll(token);
                    }
                } catch (...) {
                }
            }
        }
    }
    cout << totalSum << endl;
    return 0;
}

