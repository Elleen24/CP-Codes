#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char, int>mp;
    int cnt = 0;
    for(int i = 0;i <s.size();i++)
    {
      mp[s[i]]++;
    }
    for(auto &it:mp)
    {
      if(it.second%2!=0)
      {
        cnt++;
      }
    }
    int a = cnt - k;
    if(a==1||a==0)
    {
      cout<<"YES"<<endl;
    }
    else
    if(a>1)
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout<<"YES"<<endl;
    }
  }
}