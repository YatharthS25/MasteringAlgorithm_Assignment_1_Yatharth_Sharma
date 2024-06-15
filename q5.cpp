#include <bits/stdc++.h>

using namespace std;

int digit_sum(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n = n/10;
    }
    return sum;
}

bool comparator(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    int ans = 0;
    vector<pair<int,int> > pr(n);
    for(int i=0;i<n;i++){
        string tmp;
        cin >> tmp;
        pr[i].first = digit_sum(stol(tmp));
        pr[i].second = tmp.size();
        // cout << pr[i].first << " " << pr[i].second << endl;
    }
    sort(pr.begin(),pr.end(),comparator);
    for(int i =0;i<n;i++){
        // cout << pr[i].first << " " << pr[i].second << endl;
    }
    for(int i=0;pr[i].second=<6;i++){
        if(pr[i].second==2){
            for(int j=0;j<n-1;j++){
                if(pr[i].second==2 && pr[n-1-j].second==10 && pr[i].first+pr[n-1-j].first == 50){
                    ans+=2;
                }
                if(pr[n-1-j].second<10) break;
            }
        }
        else if(pr[i].second==3){
            for(int j=0;j<n-1;j++){
                if(pr[i].second==3 && pr[n-1-j].second==9 && pr[i].first+pr[n-1-j].first == 50){
                    ans+=2;
                }
                if(pr[n-1-j].second<9) break;
            }
        }
        else if(pr[i].second==4){
            for(int j=0;j<n-1;j++){
                if(pr[i].second==4 && pr[n-1-j].second==8 && pr[i].first+pr[n-1-j].first == 50){
                    ans+=2;
                }
                if(pr[n-1-j].second<8) break;
            }
        }
        else if(pr[i].second==5){
            for(int j=0;j<n-1;j++){
                if(pr[i].second==5 && pr[n-1-j].second==7 && pr[i].first+pr[n-1-j].first == 50){
                    ans+=2;
                }
                if(pr[n-1-j].second<7) break;
            }
        }
        else if(pr[i].second==6){
            for(int j=1;pr[i+j].second!=6;j++){
                if(pr[i].second==6 && pr[i+j].second==6 && pr[i].first+pr[i+j].first == 50){
                    ans+=2;
                }
            }
        }
        
    }
    cout << ans << endl;
    
    
        
}