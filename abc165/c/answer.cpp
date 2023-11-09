#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N, M, Q;
int A[11]{}; // すべてデフォルトで0に初期化される
int a[50], b[50], c[50], d[50];
int ans = 0;

void dfs(int n)
{
  // N桁まで行ったらループを抜ける
  if (n == N)
  {
    int sum = 0;
    for (int i = 0; i < Q; i++)
    {
      if (A[b[i]] - A[a[i]] == c[i])
        sum += d[i];
    }
    ans = max(ans, sum);
    return;
  }

  // A[n]はA[n-1]以上である必要がある
  for (int i = min(A[n], M); i <= M; i++)
  {
    A[n + 1] = i;
    dfs(n + 1);
  }
}
int main()
{
  // 入力
  cin >> N >> M >> Q;
  for (int i = 0; i < Q; i++)
  {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  A[0] = 1;
  dfs(0);
  cout << ans << "\n";
  return 0;
}