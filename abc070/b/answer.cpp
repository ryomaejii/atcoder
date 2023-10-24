#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

// この問題は、A以上B以下の範囲とC以上D以下の範囲の重なりを求める問題である。
// 重なりがない場合は、0を出力する。
// 重なりがある場合は、重なりの範囲を出力する。
// 重なりの範囲は、max(A, C)以上min(B, D)以下である。
// この範囲が重なりの範囲である。

int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  const int lower = max(A, C);
  const int upper = min(B, D);

  cout << max(0, upper - lower) << endl;
}