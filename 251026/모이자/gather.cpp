#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;
vector<int> v;
int minVal = INT_MAX;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;

    cin >> N;
    v.resize(N,0);

    for(int i = 0 ; i < N ; i++) {
        cin >> v[i];
    }


    for(int i = 0 ; i < N ; i++) {
        int cnt = 0;
        for(int j = 0 ; j < N ; j++) {
            cnt += abs(i-j) * v[j];
        }
        minVal = min(minVal, cnt);
    }

    cout << minVal << "\n";

    return 0;
}