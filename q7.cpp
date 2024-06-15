#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>


using namespace std;

int num_of_ways(int n, int k) {
    vector<int> ans(n + 1, 0);
    ans[0] = 1;

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= k;j++) {
            if (i-j >= 0) {
                ans[i]+=ans[i-j];
            }
        }
    }

    return ans[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << num_of_ways(n, k) << endl;
    }
}
