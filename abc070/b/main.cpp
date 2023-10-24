// 開始: 9:40
// 終了: 10:06
// 反省点: 問題自体は簡単だったが、配列の要素と数字としての対応がつかなかった。

#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

int main()
{
  int A, B, C, D;
  // 範囲内かどうかを判定するための配列
  int v[100] = {0};
  cin >> A >> B >> C >> D;
  int ans = 0;

  // まず、A以上B以下の範囲を1追加する
  rep(i, A, B) v[i]++;
  // 次に、C以上D以下の範囲を1追加する
  rep(i, C, D) v[i]++;

  // 2以上の部分をカウントする
  rep(i, 0, 100)
  {
    if (v[i] >= 2)
      ans++;
  }

  cout << ans << endl;
}