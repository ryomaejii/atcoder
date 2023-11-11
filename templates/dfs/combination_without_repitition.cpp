// 例えばsize=3, min=1, max=5のとき、
// 1 2 3
// 1 2 4
// 1 2 5
// 1 3 4
// 1 3 5
// 1 4 5
// 2 3 4
// 2 3 5
// 2 4 5
// 3 4 5
// というように、重複を許さず組み合わせを生成する。
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
      // i を i+1 に変更した
      dfs(depth + 1, size, i + 1, max);
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