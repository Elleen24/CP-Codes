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
void print(stack<char>st)
{
  if(st.empty())
  {
    return;
  }
  char a = st.top();
  st.pop();
  print(st);
  cout<<a;
}
int main()
{
  string s;
  cin>>s;
  int yo = 0;
  stack<char>st;
  for(int i = 0 ; i<s.size();i++)
  {
    if(s[i]=='0'&&yo==0)
    {
      if(!st.empty()&&st.top()=='1')
      {
        yo = 1;
        continue;
      }
    }
    st.push(s[i]);
  }
  if(st.size()==s.size())
  {
    for(int i = 0; i<s.size()-1;i++)
    {
      cout<<s[i];
    }
   // return;
  }
  else
  {
    string ok;
    int n = st.size();
    for(int i = 0 ; i<n;i++)
    {
      ok+=st.top();
      st.pop();
    }
    for(int i = n-1 ; i>=0;i--)
    {
      cout<<ok[i];
    }
  }
  
}