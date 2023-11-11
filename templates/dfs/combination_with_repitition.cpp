// M個の中から重複を許してN個選んだ組み合わせを調べる。
// = 単調増加数列を生成する。
// 例えば、size=3, min=1, max=3のとき、
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
#include <bits/stdc++.h>
using namespace std;

vector<int> combination;

void dfs(int depth, int size, int min, int max)
{
  if (depth == size)
  {
    for (int i = 0; i < depth; i++)
    {
      cout << combination[i] << " ";
    }
    cout << endl;
  }
  else
  {
    for (int i = min; i <= max; i++)
    {
      combination[depth] = i;
      // min を i に変更した
      dfs(depth + 1, size, i, max);
    }
  }
}

int main(void)
{
  int size, min, max;
  cin >> size >> min >> max;
  cout << endl;

  combination.resize(size);
  dfs(0, size, min, max);
}