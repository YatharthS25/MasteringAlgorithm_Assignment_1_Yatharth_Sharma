#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }

    vector<long> prefix_sum(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + A[i];
    }

    deque<int> dq;
    int min_length = INT_MAX;
    
    for (int i = 0; i <= n; ++i) {
        while (!dq.empty() && prefix_sum[i] - prefix_sum[dq.front()] >= k) {
            min_length = min(min_length, i - dq.front());
            dq.pop_front();
        }
        
        while (!dq.empty() && prefix_sum[i] <= prefix_sum[dq.back()]) {
            dq.pop_back();
        }
        
        dq.push_back(i);
    }
    if(min_length==INT_MAX) cout << -1;
    else cout << min_length;
        
}