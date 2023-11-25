#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long N, L, R;
vector<int> A;

int main()
{
  cin >> N >> L >> R;
  A.resize(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  for (long long i = 0; i < N; i++)
  {
    // LとRの範囲で最もA[i]に近い値を計算する
    long long closest = max(L, min(R, (long long)A[i]));
    if (i == N - 1)
      cout << closest << endl;
    else
      cout << closest << ' ';
  }
}