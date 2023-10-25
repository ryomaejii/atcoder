#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

// N個のボールがある。
// K色のペンキで、ボールを塗る。
// ただし、隣合うボールは異なる色で塗る。
// 何通りの塗り方があるかを求める。
int N, K;

int main()
{
  cin >> N >> K;

  // 1つ目のボールは、K色のうちどれか1色で塗ることができる。
  // 2つ目のボールは、1つ目のボールと異なる色で塗ることができる。
  // 3つ目のボールは、2つ目のボールと異なる色で塗ることができる。
  // ...
  // Nつ目のボールは、N-1つ目のボールと異なる色で塗ることができる。

  int answer = K;

  rep(i, 2, N + 1)
  {
    answer *= (K - 1);
  }

  cout << answer << endl;
}