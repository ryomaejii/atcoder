#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int X, A, B, C;

int main()
{
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> X;

  int answer = 0;

  // 普通に愚直に一致する組み合わせになるだけ繰り返すだけだった。
  rep(i, A + 1)
  {
    rep(j, B + 1)
    {
      rep(k, C + 1)
      {
        int tmp = i * 500 + j * 100 + k * 50;
        if (tmp == X)
        {
          answer++;
        }
      }
    }
  }

  cout << answer << endl;
}