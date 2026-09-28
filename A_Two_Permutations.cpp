#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int n,a,b;
    cin>>n>>a>>b;
    if(n==b && b==a)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      if(n-a-b>=2)
      {
        cout<<"Yes"<<endl;
      }
      else
      {
        cout<<"No"<<endl;
      }
    }
  }
}