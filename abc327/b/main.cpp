#include <bits/stdc++.h>
using namespace std;
long long B;
int main()
{
  cin >> B;
  if (B == 1)
  {
    cout << 1 << endl;
    return 0;
  }

  for (long long i = 2; i < B; ++i)
  {
    long long ii = 1;
    for (long j = 0; j < i; ++j)
    {
      ii *= i;
      if (ii > B)
      {
        cout << -1 << endl;
        return 0;
      }
    }

    if (ii == B)
    {
      cout << i << endl;
      return 0;
    }
  }
}
