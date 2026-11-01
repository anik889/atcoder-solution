#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<string ,int>m;
    vector<string>ss;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int maxed=0;
    for(auto const&p : m){
        if(p.second>maxed){    maxed=p.second;}
        else    continue;     
    }
    for(auto const&p : m){
        if(p.second==maxed){      ss.push_back(p.first);}
        //else    continue;     
    }
    for(auto x:ss)      cout<<x<<endl;
}
int main(){
    solve();
}