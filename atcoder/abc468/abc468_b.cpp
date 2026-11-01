#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n,d; cin>>n>>d;
    vector<pair<ll,ll>>a;
    string s; cin>>s;
    ll count=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='G'){
            ll first=max(1ll,i+1-d);
            ll second=min(n,i+1+d);
            a.push_back({first,second});
        }
    }
    if(a.empty()){
       cout<<n<<endl;
       return;
    }
    ll check=a[0].second;
    for(int i=1;i<a.size();i++){
        if(a[i].first>check)    count+=(a[i].first-check- 1);
        check=max(check,a[i].second);
    }
    if(a[0].first>1)        count+=(a[0].first-1);
    if(check<n)     count+=(n-check);
    cout<<count<<endl;
}
int main(){
    // int t; cin>>t;
    // for(int i=0;i<t;i++)    
    solve();
}