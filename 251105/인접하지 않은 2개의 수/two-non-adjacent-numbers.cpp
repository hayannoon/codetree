#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int N;
vector<int> v;
int res = INT_MIN;

int main() {
    cin >> N;
    v.resize(N);

    for(int i = 0 ; i < N ; i++) {
        cin >> v[i];
    }

    if (N < 2) {
        return 0;
    }

    vector<int> mask(N, 0);
    mask[N - 1] = mask[N - 2] = 1;
    vector<int> picked;
    picked.reserve(2);
    vector<int> m;
    m.reserve(2);

    do {
        picked.clear();
        m.clear();

        for (int i = 0; i < N; ++i) {
            if (mask[i]) {
                m.push_back(i);
                picked.push_back(v[i]);
            }
        }
        if(abs(m[0] - m[1]) == 1) continue;

        res = max(res, (picked[0]+picked[1]));

    } while (next_permutation(mask.begin(), mask.end()));

    cout << res << "\n";

    return 0;
}