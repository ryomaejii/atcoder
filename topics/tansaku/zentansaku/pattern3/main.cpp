#include <iostream>
using namespace std;

int N, P, A[1009];

bool solve(int border)
{
  int CurrentLength = 0;
  for (int i = 1; i <= N; i++)
  {
    if (A[i] > border)
      CurrentLength += 1;
    else
      CurrentLength = 0;
    if (CurrentLength >= P)
      return false;
  }
  return true;
}

int main()
{
  cin >> N >> P;
  for (int i = 1; i <= N; i++)
    cin >> A[i];
  for (int i = 0; i <= 40; i++)
  {
    if (solve(i) == true)
    {
      cout << i << endl;
      break;
    }
  }
  return 0;
}