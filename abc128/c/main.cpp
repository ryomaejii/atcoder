// 区切り文字どっちでも同じらしいわhttps://wakabame.hatenablog.com/entry/2019/02/24/141009

#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> s;
vector<int> k;
vector<int> p;

int main()
{
  cin >> N >> M;
  s.resize(M);
  k.resize(M);
  p.resize(M);
  for (int i = 0; i < M; i++)
  {
    cin >> k[i];
    s[i].resize(k[i]);
    for (int j = 0; j < k[i]; j++)
    {
      cin >> s[i][j];
    }
  }

  for (int i = 0; i < M; i++)
  {
    cin >> p[i];
  }

  // 要は奇数個か偶数個になるかの判定
  // いや、bitでonにする電球の組み合わせを全探索して、OKな場合を判定すればいいだけやん。
  // 逆の視点を持つことが重要だな。

  int count = 0;

  for (int bit = 0; bit < (1 << N); ++bit)
  {
    for (int i = 0; i < N; ++i)
    {
      if (bit & (1 << i))
      {
        cout << i << " ";
      }
    }
    cout << endl;
  }
}