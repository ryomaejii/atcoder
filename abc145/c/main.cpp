// 順列全探索
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> x;
vector<int> y;
// vは順列を生成するための配列
vector<int> v;

// 階乗を計算する関数
int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

int main()
{
  // 入力
  cin >> N;
  for (int i = 0; i < N; ++i)
  {
    int a, b;
    cin >> a >> b;
    x.push_back(a);
    y.push_back(b);
    v.push_back(i);
  }

  long double sum = 0;

  sort(v.begin(), v.end()); // 順列を生成するためにはソートが必要

  do
  {
    // vの中身がループごとに変わっていく Ex: 0,1,2 -> 0,2,1 -> 1,0,2 -> 1,2,0 -> 2,0,1 -> 2,1,0
    for (int i = 0; i < v.size(); ++i)
    {
      if (i == 0)
      {
        continue;
      }
      // _sum += sqrt(pow(x[v[i]] - x[v[i - 1]], 2) + pow(y[v[i]] - y[v[i - 1]], 2));
      long double dx = x[v[i]] - x[v[i - 1]];
      long double dy = y[v[i]] - y[v[i - 1]];
      sum += sqrt(dx * dx + dy * dy);
    }
  } while (next_permutation(v.begin(), v.end())); // next_permutationを使用して順列を生成

  // N!通りの順列を生成しているので、N!で割る
  long double ave = sum / (long double)factorial(N);

  cout << ave << endl;

  return 0;
}