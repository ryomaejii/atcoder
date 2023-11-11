// M個の要素からN個数選ぶ。ただし同じ要素をなん度も選んで良い。という問題。

// 例えば、M=3, N=3のとき、
// 1 1 1
// 1 1 2
// 1 1 3
// 1 2 2
// 1 2 3
// 1 3 3
// 2 2 2
// ...
// 3 3 3
// というように、重複を許して順列を生成する。
// 今回の入力の場合は、size=3, min=1, max=3となる。

#include <bits/stdc++.h>
using namespace std;

vector<int> permutation;

void dfs(int depth, int size, int min, int max)
{
  if (depth == size)
  {
    for (int i = 0; i < depth; i++)
    {
      cout << permutation[i] << " ";
    }
    cout << endl;
  }
  else
  {
    for (int i = min; i <= max; i++)
    {
      permutation[depth] = i;
      dfs(depth + 1, size, min, max);
    }
  }
}

int main()
{
  // max-min+1個の要素からsize個数選ぶ
  int size, min, max;
  cin >> size >> min >> max;

  permutation.resize(size);
  dfs(0, size, min, max);
}