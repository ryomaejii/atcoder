#include <bits/stdc++.h>
using namespace std;

int T, N;
vector<int> L, R;

int main()
{
  cin >> T >> N;
  L.resize(N);
  R.resize(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> L[i] >> R[i];
  }

  int A[500009] = {0};
  for (int i = 0; i < N; ++i)
  {
    A[L[i]]++;
    A[R[i]]--;
  }

  // 累積和を求める
  int S[500009] = {0}; // A[0]は0になる

  for (int i = 0; i < T; ++i)
  {
    S[i + 1] = S[i] + A[i];
  }

  for (int i = 1; i <= T; ++i)
  {
    cout << S[i] << endl;
  }
}