#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  cin >> n >> s;
  vector<int> mx(26);
  int l = 0;
  while (l < n)
  {
    int r = l + 1;
    while (r < n and s[l] == s[r])
      ++r;
    int c = s[l] - 'a';
    mx[c] = max(mx[c], r - l);
    l = r;
  }
  int ans = 0;
  for (int i = 0; i < 26; i++)
  {
    ans += mx[i];
  }
  cout << ans << endl;
}