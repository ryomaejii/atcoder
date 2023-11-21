#include <bits/stdc++.h>
using namespace std;

int N, Q;
vector<int> A, L, R;

int main()
{
  cin >> N >> Q;
  A.resize(N);
  L.resize(Q);
  R.resize(Q);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < Q; i++)
  {
    cin >> L[i] >> R[i];
  }

  vector<int> S(N + 1, 0);
  for (int i = 0; i < N; i++)
  {
    S[i + 1] = S[i] + A[i];
  }

  for (int i = 0; i < Q; i++)
  {
    int answer = S[R[i]] - S[L[i] - 1];
    cout << answer << endl;
  }
}