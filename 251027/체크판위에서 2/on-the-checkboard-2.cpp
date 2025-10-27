#include <iostream>
#include <vector>

using namespace std;
int R, C;

int main() {
    cin >> R >> C;
    vector<vector<char>> v(R, vector<char>(C));

    for(int i = 0 ; i < R ; i++) {
        for(int j = 0 ; j < C ; j++) {
            cin >> v[i][j];
        }
    }

    for(auto i : v) {
        for(auto k : i) {
            cout << k << " ";
        }
        cout <<"\n";
    }
    char start = v[0][0];
    char end = v[R-1][C-1];
    int cnt = 0;

    for(int i = 1 ; i < R-2 ; i++) {
        for(int j = 1 ; j < C-2; j++) {
            for(int k = i+1 ; k < R-1 ; k++) {
                for(int r = j+1 ; r < R-1 ; r++) {
                    if(start != v[i][j] && v[i][j] != v[k][r] && v[k][r] != end) {
                        cnt++;
                        // cout << i << ", " << j << ", " << k <<", " << r << "\n";
                    }
                }
            }
        }
    }

    cout << cnt << "\n";


    return 0;
}