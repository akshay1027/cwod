#include <bits/stdc++.h>
using namespace std;
#define AAA                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n"
#define ll long long
#define ld long double
#define SQ(a) (a) * (a)
#define F first
#define S second
int32_t main()
{
  AAA;
  string s;
  cin >> s;
  int n = s.length();
  int k = pow(2, n);
  sort(s.begin(), s.end());
  vector<string> ans;
  for (int i = 1; i < k; i++)
  {
    string t;
    for (int j = 0; j < n; j++)
    {
      int a = (int)pow(2, j) & i;
      if (a)
      {
        // cout << pow(2, j) << " " << i << " " << (pow(2, j) & i) << endl;
        t.push_back(s[j]);
      }
    }
    ans.push_back(t);
  }
  sort(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }
}