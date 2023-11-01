#include <bits/stdc++.h>
using namespace std;

int N;

int main()
{
  cin >> N;
  for (int i = 0; i < 25; ++i)
  {
    for (int j = 0; j < 15; ++j)
    {
      if (4 * i + 7 * j == N)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}