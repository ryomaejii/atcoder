// 長さNの数列A=(A1​,…,AN​) が与えられます。
// i=1,…,N のそれぞれについて次の問題を解いてください。

// 問題：
// Aの要素のうちAiより大きな要素全ての和を求めよ。

// 入力例 5 1 4 1 4 2 => 出力例 10 0 10 0 8

#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;
vector<long long> sum;

int main()
{
  cin >> N;
  A.resize(N);
  sum.resize(N + 1, 0);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  sort(A.begin(), A.end());
  for (int i = N - 1; i >= 0; i--)
    sum[i] = sum[i + 1] + A[i];

  vector<long long> ans(N);
  for (int i = 0; i < N; i++)
  {
    int j = upper_bound(A.begin(), A.end(), A[i]) - A.begin();
    ans[i] = sum[j];
  }

  for (int i = 0; i < N; i++)
  {
    cout << ans[i];
    if (i < N - 1)
      cout << " ";
    else
      cout << endl;
  }
}