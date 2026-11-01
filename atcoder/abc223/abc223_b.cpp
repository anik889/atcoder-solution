#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0);

string shift(string &str) {

    return str.at(str.length() - 1) + str.substr(0, str.length() - 1);

}

vector<string> sortString(string &newStr)

{

    vector<string> v;

     for(int i = 0; i < newStr.length(); i++){

         newStr = shift(newStr);

         v.push_back(newStr);

    }

   return v;

}

int main(){

    string S;

    cin>>S;

    string ans=S;

    string ma= S;

    vector<string> v;

    v=sortString(S);

    for(int i=0;i<v.size();i++){

           ans=max(ans,v[i]);

           ma=min(ma,v[i]);

    }

    cout<<ma<<"\n"<<ans;

    

    return 0;

}