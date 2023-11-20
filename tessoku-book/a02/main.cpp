#include <bits/stdc++.h>
using namespace std;

int N, X;
vector<int> A;

int main()
{
  cin >> N >> X;
  A.resize(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  int hasX = false;

  for (int i = 0; i < N; ++i)
  {
    if (A[i] == X)
    {
      hasX = true;
    }
  }
  cout << (hasX ? "Yes" : "No") << endl;
}