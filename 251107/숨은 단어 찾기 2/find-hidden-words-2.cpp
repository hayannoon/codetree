#include <iostream>
#include <vector>

using namespace std;

int N, M;
int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

bool checkRange(int x, int y) {
    return 0 <= x && x < N && 0 <= y && y < M;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;
    vector<vector<char>> v(N, vector<char>(M, ' '));
    int cnt = 0;
    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < M ; j++) {
            cin >> v[i][j];
        }
    }

    int nx, ny, nnx, nny;
    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < M ; j++) {
            if(v[i][j] == 'L') {
                for(int k = 0 ; k < 8 ; k++) {
                    nx = i + dx[k];
                    ny = j + dy[k];
                    nnx = i + dx[k]*2;
                    nny = j + dy[k]*2;
                    if((checkRange(nx,ny) && v[nx][ny] == 'E') && checkRange(nnx,nny) && v[nnx][nny]=='E') {
                        cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}