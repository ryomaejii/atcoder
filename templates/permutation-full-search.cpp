// 順列全探索
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> v;

int main()
{
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end()); // 順列を生成するためにはソートが必要

  do
  {
    // vの中身がループごとに変わっていく Ex: 0,1,2 -> 0,2,1 -> 1,0,2 -> 1,2,0 -> 2,0,1 -> 2,1,0
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;
  } while (next_permutation(v.begin(), v.end())); // next_permutationを使用して順列を生成

  return 0;
}