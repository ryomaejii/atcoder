#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

int N, M;
vector<int> A;

int main()
{
  cin >> N >> M;

  rep(i, 0, N)
  {
    int a;
    cin >> a;
    A.push_back(a);
  }

  sort(A.begin(), A.end());

  int ans = 0;
  rep(i, 0, (int)A.size())
  {
    int sum = 0;
    int x = A[i];
    int x2 = x + M;
    sum = upper_bound(A.begin(), A.end(), x2 - 1) - lower_bound(A.begin(), A.end(), x);
    ans = max(ans, sum);
  }

  cout << ans << endl;
}