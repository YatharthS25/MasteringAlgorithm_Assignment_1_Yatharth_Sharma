// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int sum = 0;
        while(sum<=k){
            sort(a.begin(), a.end());
            sum+=a[n-1];
            a[n-1]--;
        }
        a[n-1]++;
        cout << a[n-1] << endl;
        
    }

    return 0;
}