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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    if (n == 1)
    {
      cout << 0 << endl;
      continue;
    }
    stack<int> st;
    int cnt = 0;
    st.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
      if (arr[i] % 2 == 0)
      {
        if (!st.empty() && st.top() % 2 == 0)
        {
          cnt++;
        }
        else
        {
          st.push(arr[i]);
        }
      }
      else if (arr[i] % 2 != 0)
      {
        if (!st.empty() && st.top() % 2 != 0)
        {
          cnt++;
        }
        else
        {
          st.push(arr[i]);
        }
      }
    }
    cout<<cnt<<endl;
  }
}