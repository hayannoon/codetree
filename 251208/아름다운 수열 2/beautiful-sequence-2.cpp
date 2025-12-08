#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int N, M;
int cnt;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;

    vector<int> v(N,0);
    vector<int> v1(M,0);
    for(int i = 0 ; i < N ; i++) {
        cin >> v[i];
    }
    for(int i = 0 ; i < M ; i++) {
        cin >> v1[i];
    }

    // 1. 인덱스를 기준으로 조합을 만듦 (값이 아니라 인덱스!)
    vector<int> p(N);
    for(int i=0; i<N; i++) p[i] = i; // {0, 1, 2, ..., N-1}

    vector<int> comb(N, 0);
    fill(comb.end() - M, comb.end(), 1); // 뒤쪽 M개를 1로 채움

    do {
        // 2. 선택된 인덱스들을 모음
        vector<int> indices;
        for(int i=0; i<N; i++) {
            if(comb[i] == 1) indices.push_back(i);
        }
        
        // 3. next_permutation은 이미 오름차순으로 순회하므로 
        // indices 안의 값들은 자동으로 오름차순(0, 2, 5 등)이 됨.
        // 즉, "뒤에 있는 숫자"를 뽑는다는 조건이 자동으로 만족됨!
        
        // 4. 해당 인덱스의 실제 값들이 우리가 찾는 수열(v1)과 같은지 비교
        bool match = true;
        for(int k=0; k<M; k++) {
            if(v[indices[k]] != v1[k]) {
                match = false;
                break;
            }
        }
        
        if(match) cnt++;
        
    } while(next_permutation(comb.begin(), comb.end()));

    cout << cnt << "\n";

    return 0;
}