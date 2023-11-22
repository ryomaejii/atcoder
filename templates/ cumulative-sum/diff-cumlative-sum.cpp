// ある区間に来場した人を計算するみたいなシーンで使えるテンプレート
// 累積話で負の数を扱い、累積和をとることで、ある区間に来場した人数を計算できる
// 問題文
// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_g

#include <iostream>
using namespace std;

int N, L[100009], R[100009];
int D, B[100009];
int Answer[100009];

int main()
{
  // 入力
  cin >> D >> N;
  for (int i = 1; i <= N; i++)
    cin >> L[i] >> R[i];

  // 前日比に加算
  for (int i = 1; i <= N; i++)
  {
    // 入場し始めた日に+1する
    B[L[i]] += 1;
    // 入場し終わった次の日に-1する
    B[R[i] + 1] -= 1;
  }

  // 累積和をとる → 出力
  Answer[0] = 0;
  for (int d = 1; d <= D; d++)
    Answer[d] = Answer[d - 1] + B[d];
  for (int d = 1; d <= D; d++)
    cout << Answer[d] << endl;
  return 0;
}