#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))

string S;

string isPattern(string s)
{
  string::size_type pos = 0;
  while (pos < s.size())
  {
    if (s.find("dream", pos) == pos)
    {
      pos += 5;
    }
    // NOTE: eraserより先にeraseを判定しない。
    else if (s.find("eraser", pos) == pos)
    {
      pos += 6;
    }
    else if (s.find("erase", pos) == pos)
    {
      pos += 5;
    }
    // 判定したら移動が変になるので判定しない。
    // else if (s.find("dreamer", pos) == pos)
    // {
    //   pos += 7;
    // }
    else
    {
      return "NO";
    }
  }
  return "YES";
}

int main()
{
  cin >> S;
  cout << isPattern(S) << endl;
  return 0;
}