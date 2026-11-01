#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n; cin>>n;
    double ans = (double)((n + 1) / 2) / n;
    cout << fixed << setprecision(10) << ans << endl;
}
int main(){
    solve();
}