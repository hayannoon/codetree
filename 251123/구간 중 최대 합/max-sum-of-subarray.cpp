#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int N, K;
int res = INT_MIN;
int main() {
    cin >> N >> K;
    
    vector<int> v(N);
    for(int i = 0 ; i < N ; i++) cin >> v[i];

    for(int i = 0 ; i <= N-K; i++) {
        int sum = 0;
        for(int j = i ; j < i+K ; j++) {
            sum += v[j];
        }
        res = max(res, sum);
    }

    cout << res << "\n";
    return 0;
}