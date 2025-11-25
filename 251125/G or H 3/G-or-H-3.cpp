#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int res = INT_MIN;
vector<int> v;

int main() {
    int N, K;
    cin >> N >> K;
    v.resize(10000,0);
    int position;
    char score;
    for(int i = 0 ; i < N ; i++) {
        cin >> position >> score;
        if(score == 'G') {
            v[position-1] = 1;
        } else {
            v[position-1] = 2;
        }
    }

    for(int i  = 0 ; i <= 10000-K ; i++) {
        int sum = 0;
        for(int j = i ; j <= i+K ; j++) {
            sum += v[j];
        }
        res = max(sum, res);
    }

    cout << res << "\n";
    return 0;
}