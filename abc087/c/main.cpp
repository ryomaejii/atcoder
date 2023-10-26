// 開始: 9:30

#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

int N;
vector<int> A1, A2;

int main()
{
  cin >> N;
  A1.resize(N);
  A2.resize(N);
  rep(i, 0, N) cin >> A1[i];
  rep(i, 0, N) cin >> A2[i];

  int answer = 0;
  // iは境目
  rep(i, 0, N)
  {
    int sum = 0;
    rep(j, 0, i + 1) sum += A1[j];
    rep(j, i, N) sum += A2[j];
    answer = max(answer, sum);
  }

  cout << answer << endl;
}