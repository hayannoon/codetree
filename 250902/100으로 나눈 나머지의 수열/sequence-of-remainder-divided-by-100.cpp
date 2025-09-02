#include <iostream>

using namespace std;

int N;

int solve(int n) {
    if(n==0) return 2;
    if(n==1) return 4;
    return (solve(n-2) * solve(n-1)) % 100;
}

int main() {
    cin >> N;
    cout << solve(N-1);
    // Please write your code here.

    return 0;
}