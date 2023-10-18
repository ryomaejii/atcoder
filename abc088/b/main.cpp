#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int N, a[105];

int main()
{
  cin >> N;

  rep(i, N)
  {
    cin >> a[i];
  }

  // ソート(降順)
  sort(a, a + N, greater<int>());
  // rep(i, N)
  // {
  //   cout << a[i];
  // }
  // cout << endl;

  int odd_sum = 0, even_sum = 0;

  rep(i, N)
  {
    if (i % 2 == 0)
    {
      // 偶数
      even_sum += a[i];
    }
    else
    {
      // 奇数
      odd_sum += a[i];
    }
  }

  int ans = even_sum - odd_sum;

  cout << ans << endl;
}