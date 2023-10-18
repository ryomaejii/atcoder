#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

int main()
{
  int N, a[110];
  cin >> N;
  rep(i, N)
  {
    cin >> a[i];
  }

  sort(a, a + N);

  vector<int>
      a_vector(a, a + N);

  vector<int>::iterator it;
  it = std::unique(a_vector.begin(), a_vector.end());
  a_vector.resize(std::distance(a_vector.begin(), it));

  cout << a_vector.size() << endl;
}