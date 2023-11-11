#include <bits/stdc++.h>
using namespace std;

int N, X;
int s[10] = {0};

int main()
{
  cin >> N >> X;

  for (int i = 0; i < N; i++)
  {
    cin >> s[i];
  }

  int answer = 0;

  for (int i = 0; i < N; i++)
  {
    if (s[i] <= X)
    {
      answer += s[i];
      is_abstract
    }
  }

  cout << answer << endl;
}