#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int N, M;
using namespace std;
int cnt;
set<vector<int>> s;

int main() {
    cin >> N >> M;
    vector<int> v1(N,0);
    vector<int> v2(M,0);
    for(int i = 0 ; i < N ; i++) {
        cin >> v1[i];
    }

    for(int i = 0 ; i < M ; i++) {
        cin >> v2[i];
    }
    
    sort(v2.begin(), v2.end());

    for(int i = 0 ; i < N-M+1 ; i++) {
        vector<int> tmp;
        for(int j = i ; j < i+M ; j++) {
            tmp.push_back(v1[j]);
        }
        auto copied = tmp;
        sort(tmp.begin(), tmp.end());
        
        if(tmp == v2) {
            s.insert(copied);
        }
    }
    
    cout << s.size() << "\n";

    return 0;
}