#include <bits/stdc++.h>
using namespace std;

int N, Q;
string S;
vector<int> l, r;

int main()
{
  cin >> N >> Q;
  cin >> S;

  l.resize(Q);
  r.resize(Q);

  for (int i = 0; i < Q; ++i)
  {
    cin >> l[i] >> r[i];
  }

  vector<int> countS(N + 1, 0);
  // 隣合う文字がACの場合は1を足す
  for (int i = 0; i < N; ++i)
  {
    if (S[i] == 'A' && S[i + 1] == 'C')
    {
      countS[i + 1] = countS[i] + 1;
    }
    else
    {
      countS[i + 1] = countS[i];
    }
  }

  for (int i = 0; i < Q; ++i)
  {
    int answer = countS[r[i] - 1] - countS[l[i] - 1];
    cout << answer << endl;
  }
}