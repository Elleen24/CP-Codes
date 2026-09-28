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
    int arr[n];
    int cnt1 = 0;
    int cnt2 = 0;
    int res = -1;
    for(int i = 0; i<n;i++)
    {
      cin>>arr[i];
      if(arr[i]==2)
      {
        cnt2++;
      }
    }
    for(int i = 0 ; i<n;i++)
    {
      if(arr[i]==2)
      {
        cnt1++;
        cnt2--;
      }
      if(cnt2==cnt1)
      {
        res = i+1;
        break;
      }
    }
    cout<<res<<endl;
  }
}