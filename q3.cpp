#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    
    deque<int> arr(N);
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    vector<int> query(Q);
    for(int i=0;i<Q;i++){
        cin >> query[i];
    }
    for(int i=0;i<Q;i++){
        deque<int> dq(arr.size());
        copy(arr.begin(), arr.end(), dq.begin());
        for(int j=0;j<query[i];j++){
            sort(dq.begin(),dq.end());
            int tmp = dq.back()-dq.front();
            dq.pop_front();
            dq.pop_back();
            dq.push_back(tmp);
        }
        cout << accumulate(dq.begin(), dq.end(), 0) << " ";
    }
    
        
}