#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

#include <algorithm>

string s;

int main() {
    cin >> s;
    int sum = 0;

    for(int i = 0 ; i < s.length()-2 ; i++) {
        if(s[i]=='(' && s[i+1]=='(') {
            for(int j = i+2 ; j < s.length()-1 ; j++) {
                if(s[j]==')' && s[j+1] == ')') sum++;
            }
        }
    }

    cout << sum << "\n";

    return 0;
}