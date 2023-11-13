// 文字列連携のテンプレート
// i月j日で、ゾロ目になっているかどうかを確かめる問題
// iとjを連結し、１種類の文字だけからなるかを判定することによって求めることができる。
// 問題: abc328b

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> D(N);
  for (auto &&d : D)
  {
    cin >> d;
  }

  int ans = 0;
  for (int m = 1; m <= N; ++m)
  {
    string month = to_string(m);
    for (int d = 1; d <= D[m - 1]; ++d)
    {
      string date = month + to_string(d);
      if (size(set<char>(date.begin(), date.end())) == 1)
        ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}