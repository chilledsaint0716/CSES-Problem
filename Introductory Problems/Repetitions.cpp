#include<iostream>

using namespace std;

int main() {

    string s;
    cin >> s;
    int n = s.length();
    int current = 1, best = 0;

    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            best = max(current, best);
            current = 0;
        }
        current++;
    }
    best = max(current, best);

    cout << best;

    return 0;
}