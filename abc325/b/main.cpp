#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int N;
int W[1100000], X[1100000];

int main()
{
  cin >> N;
  rep(i, N)
  {
    cin >> W[i] >> X[i];
  }

  int ans = 0;
  rep(i, 24)
  {
    int ansJ = 0;
    rep(j, N)
    {
      // 9時から18時の間に含まれているか
      if ((i + X[j]) % 24 < 18 && (i + X[j]) % 24 >= 9)
      {
        ansJ += W[j];
      }
    }
    ans = max(ans, ansJ);
  }

  cout << ans << endl;
}