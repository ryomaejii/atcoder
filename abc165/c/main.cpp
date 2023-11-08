#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int n, m, q, ans = 0;
int a, b, c, d;
struct t
{
  int a, b, c, d;
};
vector<t> v;

void dfs(vector<int> A)
{
  if (A.size() == n + 1)
  {
    int score = 0;
    for (auto &[aa, bb, cc, dd] : v)
    {
      if (A[bb] - A[aa] == cc)
        score += dd;
    }
    ans = max(score, ans);
    return;
  }
  A.push_back(A.back());
  while (A.back() <= m)
  {
    dfs(A);
    A.back()++;
  }
}

int main()
{
  cin >> n >> m >> q;
  rep(i, q)
  {
    cin >> a >> b >> c >> d;
    v.push_back(t{a, b, c, d});
  }
  dfs(vector<int>(1, 1));
  cout << ans << endl;
  return 0;
}
