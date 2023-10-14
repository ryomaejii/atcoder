#include <iostream>
#include <math.h>
using namespace std;

// aとbを繋げたものが平方根かどうかを判定する
int main()
{
  int a, b;
  cin >> a >> b;

  // to_string()でint型をstring型に変換できる
  // stoi()でstring型をint型に変換できる
  int c = stoi(to_string(a) + to_string(b));

  // sqrt()で平方根を求める
  int d = sqrt(c);

  // 平方根が整数かどうかを判定する
  // ここでは平方根が整数ならYes、そうでなければNoを出力する
  if (d * d == c)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}