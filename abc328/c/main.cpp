#include <bits/stdc++.h>
using namespace std;

int N, Q;
string S;
vector<int> l, r;

int main()
{
  cin >> N >> Q;
  cin >> S;

  for (int i = 0; i < Q; i++)
  {
    int ll, rr;
    cin >> ll >> rr;
    l.push_back(ll);
    r.push_back(rr);
  }

  // 先に元の配列に隣合う文字がいくつあり、どの場所で同じ文字が隣合うかを調べておく
  vector<bool> isSame(N, false);
  for (int i = 0; i < N; i++)
  {
    if (i == N - 1)
      break;
    if (S[i] == S[i + 1])
      isSame[i] = true;
  }

  vector<int> sum(N, 0);
  for (int i = 0; i < N; i++)
  {
    if (i == 0)
      continue;
    sum[i] = sum[i - 1];
    if (isSame[i - 1])
      sum[i]++;
  }

  for (int i = 0; i < Q; i++)
  {
    int ll = l[i];
    int rr = r[i];
    int answer = sum[rr - 1] - sum[ll - 1];
    cout << answer << endl;
  }
}