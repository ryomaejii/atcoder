#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

int X, Y;

int main()
{
  cin >> X >> Y;

  if (X - Y <= 3 && X - Y >= -2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}