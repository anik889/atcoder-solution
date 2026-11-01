#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll count=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)  count++;
    }
    if(count==n)    cout<<"Yes\n";
    else       cout<<"No\n";
}
int main(){
    solve();
}