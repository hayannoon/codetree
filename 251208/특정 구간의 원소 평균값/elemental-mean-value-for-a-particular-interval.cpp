#include <iostream>
#include <vector>
using namespace std;
int cnt = 0;

int N;
vector<int> v;

double getAverage(int start, int end) {
    double sum = 0;
    double n = end - start + 1;
    for(int i = start ; i <= end ; i++) {
        sum += v[i];
    }
    
    return sum / n;
}

int main() {
    cin >> N;
    v.resize(N,0);

    for(int i = 0 ; i < N ; i++) {
        cin >> v[i];
    }

    for(int i = 0 ; i < N-1 ; i++) {
        for(int j = i+1 ; j < N ; j++) {
            int ave = getAverage(i, j);
            for(int k = i ; k <= j ; k++) {
                if(v[k] == ave) {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt << "\n";
    return 0;
}