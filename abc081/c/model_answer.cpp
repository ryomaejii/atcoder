// 貪欲法: https://algo-method.com/descriptions/95

#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#pragma GCC optimize("-O3")
using namespace std;
void _main();
int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  _main();
}

int N, K, A[201010];
void _main()
{
  // 入力
  cin >> N >> K;
  rep(i, 0, N) cin >> A[i];

  // mapを使って各数字の出現回数を数える
  map<int, int> cnt;
  rep(i, 0, N) cnt[A[i]]++;

  // mapから出現回数だけを取り出してvectorに入れる
  vector<int> v;
  fore(p, cnt) v.push_back(p.second);
  // 出現回数が少ない順にソート
  sort(v.begin(), v.end());

  int n = v.size();

  if (n <= K)
  {
    printf("0\n");
  }
  else
  {
    int ans = 0;
    rep(i, 0, n - K) ans += v[i];
    printf("%d\n", ans);
  }
}