#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &v, int n)
{
  int a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    v.push_back(a);
  }
}
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    for(int i = 0 ; i<n;i++)
    {
      if(!st.empty()&&s[i]==st.top())
      {
        st.pop();
      }
      else
      {
        st.push(s[i]);
      }
    }
    string result = st.empty()?"YES":"NO";
    cout<< result;
    cout<<endl;
  }
}