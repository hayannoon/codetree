#include <iostream>
#include <vector>

using namespace std;

int arr[19][19];
int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

bool checkRange(int x, int y) {
    return 0 <= x && x < 19 && 0 <= y && y < 19;
}

int main() {
    for(int i = 0 ; i < 19 ; i++) {
        for(int j = 0 ; j < 19 ; j++) {
            cin >> arr[i][j];
        }
    }

    int curDirection = 0;
    int cnt = 0;
    int nx, ny;
    bool winner = true;
    for(int i = 0 ; i < 19 ; i++) {
        for(int j = 0 ; j < 19 ; j++) {
            cnt = 0;
            curDirection = 0;
            int now = arr[i][j];

            if(now == 0) {
                continue;
            }
            else {
                for(int k = 0 ; k < 8 ; k++) {
                    nx = i + dx[k];
                    ny = j + dy[k];
                    if(checkRange(nx,ny) && arr[nx][ny] == now) {
                        winner = true;
                        for(int r = 2 ; r < 5 ; r++) {
                            nx = i + dx[k]*r;
                            ny = j + dy[k]*r;
                            if (!(checkRange(nx,ny) && arr[nx][ny] == now)) {
                                winner = false;
                                break;
                            }
                        }
                        if(winner) {
                            cout << now << "\n";
                            cout << (i + dx[k]*2)+1 << " " << (j + dy[k]*2)+1 << "\n";
                            return 0;
                        }
                    }     
                }                
            }
        }
    }

    cout << 0 << "\n";


    return 0;
}