#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  int ans = 0;

  cin >> S;
  int size = S.size() - 1;

  // +が入るのはs.size() - 1箇所
  for (int bit = 0; bit < (1 << size); ++bit)
  {
    string tmp = S[0];

    for (int i = 0; i < size; ++i)
    {
      if (bit & (1 << i))
      {
        ans = ans + tmp - "0";
        tmp = S[i + 1];
      }
      else
      {
        tmp += S[i + 1];
      }
    }
  }

  cout << ans << endl;
}