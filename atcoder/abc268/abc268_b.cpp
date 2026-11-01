#include<iostream>

#include<cstring>

using namespace std;

int main()

{

    string s,t;

    cin>>s;

    cin>>t;

    bool isPrefix = std::mismatch(s.begin(), s.end(), t.begin(), t.end()).first == s.end();

    if(isPrefix==1)    cout<<"Yes"<<endl;

    else    cout<<"No"<<endl;

    return 0;

}