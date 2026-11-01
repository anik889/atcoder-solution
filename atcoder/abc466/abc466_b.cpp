#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(),a.end());
    vector<pair<ll,ll>>ans;
    for(ll i=0;i<n;i++){
        if (i==a.size()-1||a[i].first!=a[i+1].first)        ans.push_back(a[i]);
    }
    for(int i=1;i<=m;i++){
        bool check=false;
        for(auto  p:ans){
            if(p.first==i){
                check=true;
                break;
            }
        }
        if(!check)    ans.push_back({i,-1});
    }
    sort(ans.begin(),ans.end());
    for(ll i=0;i<ans.size();i++)
        cout<<ans[i].second<<' ';
    cout<<endl;
}
int main(){
    solve();
}