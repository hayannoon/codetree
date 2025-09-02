#include <iostream>

using namespace std;

int n;

int solve(int k) {
    if(k==1) return 0;
    if(k%2==0) return 1 + solve(k/2);
    return 1 + solve(k*3 +1);
}

int main() {
    cin >> n;
    cout << solve(n);
    // Please write your code here.

    return 0;
}