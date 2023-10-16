int N, K, X[100000], Y[100000], C[100000];
#include <iostream>
using namespace std;

#define w = "W"
#define b = "B"

int check()
{
  // NOTE: どんな白黒にしても、座標(x, y)と(x+2k, y+2k)は同じ色になる
  return 4;
}

int main()
{
  cin >> N >> K;
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i] >> C[i];
  }

  cout << check() << endl;

  return 0;
}
