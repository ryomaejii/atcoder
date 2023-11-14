// 累積和のテンプレート
#include <bits/stdc++.h>

int N, left, right;
vector<int> A(N);

int main()
{
  cin >> N;
  cin >> left >> right;

  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  // 累積和を求める
  vector<int> S(N + 1, 0); // A[0]は0になる

  for (int i = 0; i < N; ++i)
  {
    S[i + 1] = S[i] + A[i];
  }

  // leftからrightまでの和を求める
  int answer = S[right] - S[left - 1];

  cout << answer << endl;
}