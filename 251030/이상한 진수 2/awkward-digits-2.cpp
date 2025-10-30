#include <iostream>

using namespace std;
string s;

int main() {
    cin >> s;

    long long value = 0;
    bool changeFlag = false;

    for(char ch : s) {
        if(ch != '0' && ch != '1') {
            cerr << "this is not binary number\n";
            return 1;
        }
        if(ch == '0' && !changeFlag) {
            ch = '1';
            changeFlag = true;
        }
        value = value * 2 + (ch - '0');

    }

    if(!changeFlag) {
        value --;
    }
    cout << value << "\n";

    return 0;
}