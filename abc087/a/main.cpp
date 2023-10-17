#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int X, A, B;

int main()
{
  cin >> X;
  cin >> A;
  cin >> B;

  int ans = (X - A) % B;

  cout << ans << endl;
}