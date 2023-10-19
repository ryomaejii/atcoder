#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int main()
{
  int N;
  int d[110];
  cin >> N;
  rep(i, N)
  {
    cin >> d[i];
  }

  set<int> uniqueD;

  rep(i, N)
  {
    uniqueD.insert(d[i]);
  }

  cout << uniqueD.size() << endl;
}