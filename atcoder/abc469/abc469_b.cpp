#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n; cin>>n;
  string a;
  cin>>a;
  if(n==1){
    if(a[0]=='x')   cout<<1<< endl;
    else  cout<<0<<endl;
    return;
  }
  int count =0;
  for(int i=1;i<n-1;i++){
    if(a[i]=='x'&& a[i-1]=='x' && a[i+1]=='x')  count++;
  }
  if(a[0]=='x' && a[1]=='x')  count++;
  if(a[n-1]=='x' && a[n-2]=='x')  count++;
  cout<<count<<endl;
}
int main(){
  solve();
}