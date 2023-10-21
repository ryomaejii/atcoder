// 開始: 11:40
// 終了: 12:00
// 所要時間: 20分
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int H, W;
string S[100];

int main()
{
  cin >> H >> W;

  rep(i, H)
  {
    cin >> S[i];
  }

  // 上から順に見ていって、もし爆弾だった場合に、周り全てに+1する。
  rep(i, H)
  {
    rep(j, W)
    {
      if (S[i][j] == '#')
      {
        continue;
      }
      int count = 0;
      for (int di = -1; di <= 1; di++)
      {
        for (int dj = -1; dj <= 1; dj++)
        {
          int ni = i + di;
          int nj = j + dj;
          // 角の場合はスキップ
          if (ni < 0 || ni >= H || nj < 0 || nj >= W)
          {
            continue;
          }
          if (S[ni][nj] == '#')
          {
            count++;
          }
        }
      }
      // 文字列に変換したcountを入れる
      S[i][j] = count + '0';
    }
  }

  // Sの出力
  rep(i, H)
  {
    cout << S[i] << endl;
  }
}