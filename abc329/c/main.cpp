#include <bits/stdc++.h>
using namespace std;

int N; // 1 <= N <= 2 * 10^5
string S;

int main()
{
  cin >> N;
  cin >> S;

  vector<int> last_position(256, -1); // 各文字の最後の位置を記録
  long long count = 0;
  int start = 0; // 現在の部分文字列の開始位置

  for (int i = 0; i < N; i++)
  {
    start = max(start, last_position[S[i]] + 1); // 新しいユニークな部分文字列の開始位置を更新
    count += (i - start + 1);                    // 新しい部分文字列の数を加算
    last_position[S[i]] = i;                     // 文字の位置を更新
  }

  cout << count << endl;

  return 0;
}