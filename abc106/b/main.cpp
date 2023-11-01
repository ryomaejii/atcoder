#include <bits/stdc++.h>
using namespace std;

int N;

int main()
{
  cin >> N;
  int answer = 0;

  for (int i = 1; i <= N; ++i)
  {
    if (i % 2 == 0)
    {
      continue;
    }

    int count = 0;
    for (int j = 1; j <= i; ++j)
    {
      if (i % j == 0)
      {
        count++;
      }
    }

    if (count == 8)
    {
      answer++;
    }
  }

  cout << answer << endl;
}