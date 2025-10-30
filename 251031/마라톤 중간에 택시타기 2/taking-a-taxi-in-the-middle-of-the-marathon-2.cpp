#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <cstdlib>
using namespace std;
int N;
vector<pair<int,int>> v;
int res = INT_MAX;

int calcLength() {
    int sum = 0;
    for(int i = 1 ; i < N ; i++) {
        sum += (abs(v[i].first-v[i-1].first) + abs(v[i].second - v[i-1].second));
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    v.resize(N);
    for(int i = 0 ; i < N ; i++) {
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 1 ; i < N-1 ; i++) {
        auto [x,y] = v[i];
        v[i] = v[i-1];
        res = min(res, calcLength());
        v[i] = make_pair(x,y);
    }

    cout << res << "\n";

    return 0;
}