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
    deque<char>dq;
    for(int i = 0 ; i<n;i++)
    {
      char a;
      cin>>a;
      dq.push_back(a);
    }
    while(!dq.empty()&&dq.back()!=dq.front())
    {
      dq.pop_back();
      dq.pop_front();
    }
    cout<<dq.size()<<endl;
  }
}