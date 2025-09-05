#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[10];

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int lcm_recursive(int nums[], int size) {
    if (size == 1) return nums[0];
    return lcm(nums[0], lcm_recursive(nums + 1, size - 1));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << lcm_recursive(arr, n) << endl;
    
    return 0;
}