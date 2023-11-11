// $ ./permutation_without_repetition
// 3 1 3

// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
#include <bits/stdc++.h>
using namespace std;

vector<int> permutation;
vector<bool> used; // 追加した
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
      // i が使用済みの値かどうかを判定
      if (!used[i])
      {
        permutation[depth] = i;
        used[i] = true;
        dfs(depth + 1, size, min, max);
        used[i] = false;
      }
    }
  }
}

int main(void)
{
  int size, min, max;
  cin >> size >> min >> max;
  cout << endl;

  permutation.resize(size);
  used.resize(size); // 確保した部分は 0 で初期化される
  dfs(0, size, min, max);
}