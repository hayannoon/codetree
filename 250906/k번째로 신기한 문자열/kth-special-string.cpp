#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    sort(str, str+100);
    int cnt = 0;

    for(string s : str) {
        if(s.substr(0, t.length())== t) {
            cnt++;
            if(cnt == k) {
                cout << s;
                return 0;
            }
        }
    }

    // Please write your code here.

    return 0;
}