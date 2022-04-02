#include<iostream>

using namespace std;

int main() {

    long long int n;
    cin >> n;
    
    long long int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long int maxNum = arr[0];
    long long int res = 0;

    for (int i = 1; i < n; ++i) {
        res += max(0LL, maxNum - arr[i]);
        maxNum = max(maxNum, arr[i]);
    }
    cout << res;

    return 0;
}