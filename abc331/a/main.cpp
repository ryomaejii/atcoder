#include <bits/stdc++.h>
using namespace std;

int M, D;
int y, m, d;

int main()
{
  cin >> M >> D;
  cin >> y >> m >> d;

  d++;
  if (d > D)
  {
    d = 1;
    m++;
    if (m > M)
    {
      m = 1;
      y++;
    }
  }

  cout << y << " " << m << " " << d << endl;
}