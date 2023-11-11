#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> graph;

void dfs(int node)
{
  visited[node] = true;
  cout << node << " ";

  // 隣接ノードを探索
  for (int i = 0; i < graph[node].size(); i++)
  {
    int next = graph[node][i];
    if (!visited[next])
    {
      dfs(next);
    }
  }
}

int main()
{
  int N; // ノードの数
  int M; // エッジの数
  cin >> N >> M;

  graph.resize(N);
  visited.resize(N, false);

  // エッジの読み込み
  for (int i = 0; i < M; i++)
  {
    int u, v; // エッジ(u, v)
    cin >> u >> v;

    // 無向グラフの場合
    graph[u].push_back(v);
    graph[v].push_back(u);

    // 有向グラフの場合は上の行のみ使用
  }

  // すべてのノードが連結であるとは限らないため、
  // すべてのノードを開始点としてDFSを実行する
  for (int i = 0; i < N; i++)
  {
    if (!visited[i])
    {
      dfs(i);
    }
  }

  return 0;
}