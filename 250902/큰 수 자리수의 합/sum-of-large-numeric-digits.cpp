#include <iostream>

using namespace std;

int a, b, c;

int solve(int k) {
    if(k<10) return k;
    return (k % 10) + solve(k/10);
}

int main() {
    cin >> a >> b >> c;

    cout << solve(a*b*c);

    // Please write your code here.

    return 0;
}