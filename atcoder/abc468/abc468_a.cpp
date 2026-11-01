#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n; cin>>n;
    vector<ll>a(n); 
    for(int i=0;i<n;i++)    cin>>a[i];
    ll count=0;
    for(int i=1;i<n-1;i++){
        if(a[i-1]<a[i] && a[i]>a[i+1])      count++;
    }
    cout<<count<<endl;
}
int main(){
    // int t; cin>>t;
    // for(int i=0;i<t;i++)    
    solve();
}