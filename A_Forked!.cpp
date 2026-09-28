#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    map<pair<long long, long long>, int> mp;
    set<pair<long long , long long>>st;
    set<pair<long long , long long>>st1;
    int cnt = 0;
    long long a, b, x1, y1, x2, y2;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;
    st.insert({x1 + a, y1 + b});
    //mp[st.top()]++;
    st.insert({x1 + a, y1 - b});
    //mp[st.top()]++;
    st.insert({x1 - a, y1 + b});
    //mp[st.top()]++;
    st.insert({x1 - a, y1 - b});
    //mp[st.top()]++;
    st.insert({x1 + b, y1 + a});
    //mp[st.top()]++;
    st.insert({x1 + b, y1 - a});
   // mp[st.top()]++;
    st.insert({x1 - b, y1 + a});
    //mp[st.top()]++;
    st.insert({x1 - b, y1 - a});
    //mp[st.top()]++;
    // 0
    st1.insert({x2 + a, y2 + b});
   // mp[st.top()]++;
    st1.insert({x2 + a, y2 - b});
   // mp[st.top()]++;
    st1.insert({x2 - a, y2 + b});
    //mp[st.top()]++;
    st1.insert({x2 - a, y2 - b});
   // mp[st.top()]++;
    st1.insert({x2 + b, y2 + a});
    //mp[st.top()]++;
    st1.insert({x2 + b, y2 - a});
    //mp[st.top()]++;
    st1.insert({x2 - b, y2 + a});
    //mp[st.top()]++;
    st1.insert({x2 - b, y2 - a});
    //mp[st.top()]++;
    for(auto &it : st)
    {
      mp[it]++;
    }
    for(auto &it : st1)
    {
      mp[it]++;
    }
    for (auto &it : mp)
    {
      if (it.second > 1)
        cnt++;
    }
    cout << cnt << endl;
  }
}