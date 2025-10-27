#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int N;
int maxVal = INT_MIN;

int main() {
    cin >> N;
    vector<vector<int>> v(N);

    for(int i = 0 ; i < N ; i++) {
        v[i].reserve(N);
        for(int j = 0 ; j < N ; j++) {
            cin >> v[i][j];
        }
    }

    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < N-2 ; j++) {
            maxVal = max(maxVal, v[i][j]+v[i][j+1]+v[i][j+2]);
        }
    }

    cout << maxVal << "\n";
    

    return 0;
}