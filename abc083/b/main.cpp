#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int N, A, B;

int main()
{
  cin >> N >> A >> B;

  int answer = 0;

  rep(i, N + 1)
  {
    int sum = 0;
    int tmp = i;
    while (tmp > 0)
    {
      sum += tmp % 10;
      tmp /= 10;
    }
    if (A <= sum && sum <= B)
    {
      answer += i;
    }
    sum = 0;
  }

  cout << answer << endl;
}