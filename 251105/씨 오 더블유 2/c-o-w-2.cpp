#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int N;
string s;

int main() {
    cin >> N;
    cin >> s;
    int cnt = 0;

    for(int i = 0 ; i < s.length()-2 ; i++) {
        for(int j = i+1 ; j < s.length()-1 ; j++) {
            for(int k = j+1 ; k < s.length() ; k++) {
                if(s[i] == 'C' && s[j] == 'O' && s[k] == 'W') cnt++;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}