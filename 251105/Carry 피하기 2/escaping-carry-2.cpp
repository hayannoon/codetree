#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int N;

int getSumIfCarry(int a, int b, int c) {
    int backup = a+b+c;

    while(a!=0 || b!=0 || c!=0) {
        int sum = 0;
        sum += a%10;
        sum += b%10;
        sum += c%10;

        if(sum >= 10) return INT_MIN;

        a /= 10;
        b /= 10;
        c /= 10;
    }

    return backup;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    vector<int> v;
    v.resize(N);
    int res = INT_MIN;

    for(int i = 0 ; i < N ; i++) {
        cin >> v[i];
    }

    for(int i = 0 ; i < N-2 ; i++) {
        for(int j = i+1 ; j < N-1 ; j++) {
            for(int k = j+1 ; k < N ; k++) {
                res = max(res, getSumIfCarry(v[i],v[j],v[k]));
            }
        }
    }

    cout << (res == INT_MIN ? -1 : res) << "\n";

    return 0;
}