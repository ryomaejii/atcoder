#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N;
int A[200];
int count = 0;

int main()
{
  cin >> N;
  rep(i, N)
  {
    cin >> A[i];
  }

  while (true)
  {
    rep(i, N)
    {
      if (A[i] % 2 == 1)
      {
        break;
      }
    }

    rep(i, N)
    {
      A[i] /= 2;
    }
    count++;
  }

  cout << count << endl;

  return 0;
}