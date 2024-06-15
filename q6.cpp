#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,m;
    cin >> n >> m;
    int steps = 0;
    
    if(n==1 && m>2) {cout << -1 << endl; return 0;}
    if(m==1 && n>2) {cout << -1 << endl; return 0;}
    
    if(n>m){
        while(n-1>m) {
            steps += 4; 
            n = n-2;
        }
    }
    else if(n<m){
        while(m-1>n){
            steps += 4; 
            m = m-2;
        }
    }
    
    
    if(n==m) steps += 2*(n-1);
    if(n-m == 1 ) steps += 2*m-1;
    if(n-m == -1 ) steps += 2*n-1;
    cout << steps << endl;
}
