#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

string S;
//---------------------------------------------------------------------------------------------------
void _main()
{
  cin >> S;

  rep(msk, 0, 1 << 3)
  {
    int sm = S[0] - '0';
    rep(i, 0, 3)
    {
      if (msk & (1 << i))
        sm += S[i + 1] - '0';
      else
        sm -= S[i + 1] - '0';
    }
    if (sm == 7)
    {
      cout << S[0];
      rep(i, 0, 3)
      {
        if (msk & (1 << i))
          cout << "+";
        else
          cout << "-";
        cout << S[i + 1];
      }
      cout << "=7" << endl;
      return;
    }
  }
}