// 開始: 9:06

#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

string ABCD;
int A, B, C, D;
int match = 7;

int main()
{
  cin >> ABCD;
  A = ABCD[0] - '0';
  B = ABCD[1] - '0';
  C = ABCD[2] - '0';
  D = ABCD[3] - '0';

  // A + B + C + D
  // A + B + C - D
  // A + B - C + D
  // A + B - C - D
  // A - B + C + D
  // A - B + C - D
  // A - B - C + D
  // A - B - C - D
  rep(i, 0, 2)
  {
    rep(j, 0, 2)
    {
      rep(k, 0, 2)
      {
        int sum = A;
        if (i == 0)
          sum += B;
        else
          sum -= B;
        if (j == 0)
          sum += C;
        else
          sum -= C;
        if (k == 0)
          sum += D;
        else
          sum -= D;
        if (sum == 7)
        {
          if (i == 0)
            cout << A << "+";
          else
            cout << A << "-";
          if (j == 0)
            cout << B << "+";
          else
            cout << B << "-";
          if (k == 0)
            cout << C << "+";
          else
            cout << C << "-";
          cout << D << "=7" << endl;
          return 0;
        }
      }
    }
  }

  // cout << answer << endl;
}