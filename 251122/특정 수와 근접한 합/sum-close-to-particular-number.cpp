#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
#include <cmath>

using namespace std;
int S, N;
int minDiff = INT_MAX;
int val, sumVal;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> S;

    vector<int> v(N);
    for(int i = 0 ; i < N ; i++) cin >> v[i];
    sumVal = accumulate(v.begin(), v.end(), 0);

    for(int i = 0 ; i < N-1 ; i++) {
        for(int j = i+1 ; j < N ; j++) {
            val = abs(S - (sumVal - v[i] - v[j]));
            minDiff = min(minDiff, val);
        }
    }

    cout << minDiff << "\n";
    return 0;
}