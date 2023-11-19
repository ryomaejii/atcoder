#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int m = *max_element(a.begin(), a.end());
  int ans = 0;
  for (int e : a)
    if (e != m)
      ans = max(ans, e);
  cout << ans << endl;
}