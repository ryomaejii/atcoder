#include <bits/stdc++.h>
using namespace std;

string S;
int main()
{
  cin >> S;

  for (int i = 0; i < S.size(); i++)
  {
    if (i == S.size() - 1)
    {
      cout << S[i] << endl;
      break;
    }

    cout << S[i] << " ";
  }
}