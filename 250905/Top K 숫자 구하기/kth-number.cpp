#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, k;
vector<int> v;

int main() {
    cin >> N >> k;
    v.reserve(N);
    int n;
    for(int i = 0 ; i < N ; i++) {
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());
    cout << v[k-1];


    // Please write your code here.

    return 0;
}
