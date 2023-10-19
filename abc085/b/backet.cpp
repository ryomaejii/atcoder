// バケット法
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int main()
{
  int N;
  int d[110];

  cin >> N;
  rep(i, N)
  {
    cin >> d[i];
  }

  // 配列を0埋めする
  int num[110] = {0};

  // もしそのd[i]にその数字が存在したら、+1する
  rep(i, N)
  {
    num[d[i]]++;
  }

  // 0以上の時にansを+1する
  int ans = 0;
  rep(i, 100)
  {
    if (num[i] > 0)
    {
      ans++;
    }
  }

  cout << res << endl;
}