// スーパーマーケットで卵のパックが売られています。
// 卵6個入りのパックはS円、卵8個入りのパックはM円、卵12個入りのパックはL円です。
// どのパックも何パックでも購入できるとき、N個以上の卵を買うために必要な最小の金額を求めてください。
// 入力例: 16 120 150 200 => 出力例: 300

#include <bits/stdc++.h>
using namespace std;

int N, S, M, L;

int main()
{
  cin >> N >> S >> M >> L;

  int answer = INT_MAX;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      for (int k = 0; k <= N; k++) {
        if (i * 6 + j * 8 + k * 12 >= N) {
          answer = min(answer, i * S + j * M + k * L);
        }
      }
    }
  }
  cout << answer << endl;
}