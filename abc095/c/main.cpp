#include <bits/stdc++.h>
using namespace std;

int A, B, C, X, Y;

int main()
{
  cin >> A >> B >> C >> X >> Y;

  // // Xが0の場合
  // if (X == 0)
  // {
  //   cout << B * Y << endl;
  //   return 0;
  // }

  // // Yが0の場合
  // if (Y == 0)
  // {
  //   cout << A * X << endl;
  //   return 0;
  // }

  // Cの方がお得な場合
  if (A + B > 2 * C)
  {
    int c = C * 2 * min(X, Y);
    int a = min(A, C * 2) * max(0, X - Y);
    int b = min(B, C * 2) * max(0, Y - X);
    cout << c + a + b << endl;
    return 0;
  }
  // AとBの方がお得な場合
  else
  {
    cout << A * X + B * Y << endl;
    return 0;
  }
}