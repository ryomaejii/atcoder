#include <bits/stdc++.h>
using namespace std;

int N;

int func(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else
  {
    return n + func(n - 1);
  }
}

int main()
{
  cin >> N;
  cout << func(N) << endl;
}