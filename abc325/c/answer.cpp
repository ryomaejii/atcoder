// この問題はセンサを頂点として、上下左右に隣接しているセンサの間に辺を張ったときのグラフの連結成分の個数を求める問題です。
// グラフの連結成分の個数は以下のようにすることで時間計算量O(HW) で求めることができます。

// - 答えを 0 で初期化する。
// - 未訪問の頂点がある限り、以下を繰り返す。
//   - 未訪問の頂点を 1 つ選ぶ。
//   - その頂点から DFS や BFS を行うことで、その頂点と同じ連結成分にある頂点をすべて訪問する。
//   - 答えに 1 を加算する。

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 8方向の移動を表すベクトル
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int main()
{
  // 入力
  int h, w;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++)
      cin >> s[i][j];

  // 答え初期化
  int ans = 0;

  // カウントに含めない+既に調べたマスを記録する配列
  vector<vector<bool>> used(h, vector<bool>(w));

  // 幅優先探索
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      // 既に調べたマスなら探索しない
      if (s[i][j] == '.' or used[i][j])
      {
        continue;
      }

      // BFS のためのキュー
      queue<pair<int, int>> que;
      // iとjのペアをpush
      que.push({i, j});
      while (!que.empty())
      {
        // キューの先頭を取り出す = 一番最初に入れたものを取り出す
        pair<int, int> p = que.front();
        que.pop();
        int x = p.first, y = p.second;

        // 8方向を探索
        for (int d = 0; d < 8; d++)
        {
          int nx = x + dx[d];
          int ny = y + dy[d];
          if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '#' && !used[nx][ny])
          {
            used[nx][ny] = true;
            que.push({nx, ny});
          }
        }
      }
      ans++;
    }
  }
  cout << ans << endl;
}