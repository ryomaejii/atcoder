#include <bits/stdc++.h>
using namespace std;

int n, q;
char s[300001];
int a[300000], b[300000];
int main(void)
{
  cin >> n >> q;
  // Sの入力
  for (int i = 1; i <= n; i++)
    cin >> s[i];

  // 累積和を求める
  // 一旦、隣合う文字が同じかどうかを調べる
  for (int i = 1; i <= n - 1; i++)
    if (s[i] == s[i + 1])
      a[i] = 1;
  // 隣り合う文字が同じか判定する配列の累積和を求める
  for (int i = 1; i <= n - 1; i++)
    b[i] = b[i - 1] + a[i];

  // クエリ処理
  int l, r;
  for (int i = 1; i <= q; i++)
  {
    cin >> l >> r;
    cout << b[r - 1] - b[l - 1] << "\n";
  }

  return 0;
}