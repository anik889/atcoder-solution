#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long n; cin>>n;
  long long count=0;
  vector<long long >a(n);
  for(long long i=0;i<n;i++)  cin>>a[i];
  vector<long long >b(n);
  for(long long i=0;i<n;i++)  cin>>b[i];
  for(long long i=0;i<n;i++){
    if(b[a[i]-1]==i+1)  count++;
    else  continue;
  }
  if(count==n)  cout<<"Yes"<<endl;
  else  cout<<"No"<<endl;
}
int main(){
  int t=1;//cin>>t;
  for(int i=0;i<t;i++)  solve();
}