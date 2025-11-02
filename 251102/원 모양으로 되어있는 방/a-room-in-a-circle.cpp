#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int N;
vector<int> v;
int res = INT_MAX;

int getLength(int cur, int start) {
    if(cur > start) return cur - start;
    else if(cur== start) return 0;
    else return N - start + cur;
}

int main() {
    cin >> N;
    v.resize(N);

    for(int i = 0 ; i < N ; i++) {
        cin >> v[i];
    }

    for(int start = 0 ; start < N ; start++) {
        int candidate = 0;
        for(int cur = 0 ; cur < N ; cur++) {
            int len = getLength(cur, start);
            candidate += len * v[cur];
        }
        res = min(res, candidate);
    }

    cout << res << "\n";
    
    
    return 0;
}