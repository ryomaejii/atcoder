// 全探索を再帰関数で実装する
// 全探索の参考: https://qiita.com/e869120/items/25cb52ba47be0fd418d6#3-3-%E5%86%8D%E5%B8%B0%E9%96%A2%E6%95%B0%E3%82%92%E7%94%A8%E3%81%84%E3%81%9F%E5%85%A8%E6%8E%A2%E7%B4%A2
#include <bits/stdc++.h>
using namespace std;

#define rep(i, start, end) for (int i = start; (i) < (end); ++(i))

int N, A, B, C, L[10];

// ansの初期値は十分大きい値にする
int ans = inf;

// flag[i] := i番目の竹をどの竹に使うか
int flag[8];

void dfs(int cu)
{
  // 最後まで到達したら
  if (cu == N)
  {
    int a = 0, b = 0, c = 0;
    int ca = 0, cb = 0, cc = 0;

    // 竹の長さの合計を計算する
    rep(i, 0, N)
    {
      if (flag[i] == 0)
        a += L[i], ca++;
      else if (flag[i] == 1)
        b += L[i], cb++;
      else if (flag[i] == 2)
        c += L[i], cc++;
    }

    // 1本も使われていない竹があったらコストの計算はできない
    if (0 == ca or 0 == cb or 0 == cc)
      return;

    // それぞれの竹の長さを目標の長さにするために必要なコストを計算する
    int cand = (ca - 1) * 10 + (cb - 1) * 10 + (cc - 1) * 10;
    cand += abs(A - a) + abs(B - b) + abs(C - c);
    // 最小値を更新する
    chmin(ans, cand);
    return;
  }

  // A, B, C, どれにも使わない でフラグを進める
  rep(i, 0, 4)
  {
    flag[cu] = i;
    dfs(cu + 1);
  }
}

void _main()
{
  cin >> N >> A >> B >> C;
  rep(i, 0, N) cin >> L[i];

  dfs(0);
  cout << ans << endl;
}