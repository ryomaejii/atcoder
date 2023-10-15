#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  // Nの回数分だけ、t, x, yを入力
  int t[N], x[N], y[N];
  for (int i = 0; i < N; i++)
  {
    cin >> t[i] >> x[i] >> y[i];
  }

  // t[i]とx[i]のy[i]の和が一致すれば、Yes、一致しなければNo
  for (int i = 0; i < N; i++)
  {
    if (t[i] >= x[i] + y[i] && (t[i] - x[i] - y[i]) % 2 == 0)
    {
      continue;
    }
    else
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}