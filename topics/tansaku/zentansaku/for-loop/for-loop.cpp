#include <bits/stdc++.h>
using namespace std;

int N, K, A[100000000];

int main()
{
  cin >> N >> K;
  for (int i = 0; i < N; ++i)
    cin >> A[i];

  int answer = 0;
  for (int i = 0; i < N; ++i)
  {
    for (int j = i + 1; j < N; ++j)
    {
      for (int k = j + 1; k < N; ++k)
      {
        int sum = A[i] + A[j] + A[k];
        if (sum == K)
          answer++;
      }
    }
  }

  cout << answer << endl;
}