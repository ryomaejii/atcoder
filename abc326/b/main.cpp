#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

string N;

int main()
{
  cin >> N;

  while (true)
  {
    int num_100 = N[0] - '0';
    int num_10 = N[1] - '0';
    int num_1 = N[2] - '0';
    int num_100_10 = num_100 * num_10;

    if (num_100_10 == num_1)
    {
      cout << N << endl;
      return 0;
    }
    else
    {
      int num = stoi(N);
      num++;
      N = to_string(num);
    }
  }
}