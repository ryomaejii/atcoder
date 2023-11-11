#include <bits/stdc++.h>
using namespace std;

bool isZorome(int number)
{
  int lastDigit = number % 10;
  number /= 10;

  while (number > 0)
  {
    if (number % 10 != lastDigit)
    {
      return false;
    }
    number /= 10;
  }
  return true;
}

int main()
{
  int N;
  cin >> N;
  vector<int> D(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> D[i];
  }

  int zoromeDays = 0;
  for (int month = 1; month <= N; ++month)
  {
    if (!isZorome(month))
      continue; // 月がゾロ目でなければスキップ

    for (int day = 1; day <= D[month - 1]; ++day)
    {
      if (isZorome(day))
      {
        // 最後にdayとmonthの構成が同じならカウントアップ
        if (day % 10 == month % 10)
          zoromeDays++; // 月も日もゾロ目ならカウントアップ
      }
    }
  }

  cout << zoromeDays << endl;
  return 0;
}