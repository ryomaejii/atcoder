#include <bits/stdc++.h>
using namespace std;

int N, K;

int main()
{
  cin >> N >> K;
  int count = 0;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      int z = K - i - j;
      if (z > 0 && z <= N)
      {
        count++;
      }
    }
  }

  cout << count << endl;
}