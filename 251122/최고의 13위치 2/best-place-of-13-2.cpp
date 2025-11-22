#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int N;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int max_val = INT_MIN;

    if(!(cin>>N)) return 0;
    vector<vector<int>> v(N, vector<int>(N));
    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < N ; j++) 
            cin >> v[i][j];
    }

    for(int i = 0 ; i < N ; i++) {
        int sum1 = 0;
        int sum2 = 0;
        for(int j = 0 ; j < N-2 ; j++) {
            sum1 = v[i][j] + v[i][j+1] + v[i][j+2];
            for(int i2 = 0 ; i2 < N ; i2++) {
                for(int j2 = 0 ; j2 < N-2 ; j2++) {
                    sum2 = v[i2][j2] + v[i2][j2+1] + v[i2][j2+2];
                    if (!(i==i2 && j+2 >= j2)) {
                        max_val = max(max_val, sum1+sum2);
                    } 
                }
            }
        }
    }

    cout << max_val << "\n";
    

    return 0;
}