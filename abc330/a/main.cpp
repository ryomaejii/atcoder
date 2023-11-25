#include <bits/stdc++.h>
using namespace std;

int N, L;
vector<int> A;

int main()
{
  cin >> N >> L;
  A.resize(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  int answer = 0;

  for (int i = 0; i < N; i++)
  {
    if (A[i] >= L)
      answer++;
  }
  cout << answer << endl;
}