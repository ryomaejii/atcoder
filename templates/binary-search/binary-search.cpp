// URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cj
#include <bits/stdc++.h>
using namespace std;

int N, Q;
vector<int> A, X;

int main()
{
  cin >> N;
  A.resize(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  cin >> Q;
  X.resize(Q);
  for (int i = 0; i < Q; i++)
    cin >> X[i];

  // for (int i = 0; i < Q; i++)
  // {
  //   int answer = 0;
  //   for (int j = 0; j < N; j++)
  //   {
  //     if (A[j] < X[i])
  //       answer++;
  //   }
  //   cout << answer << endl;
  // }
  // これだと計算量がO(NQ)になってしまう
  // これをO(NlogN)にするには、Aをソートしておいて、二分探索を使う

  sort(A.begin(), A.end());

  for (int i = 0; i < Q; i++)
  {
    // X[i]より小さい値が何個あるかを二分探索で求める
    int answer = lower_bound(A.begin(), A.end(), X[i]) - A.begin();
    cout << answer << endl;
  }
}