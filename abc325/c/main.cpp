#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int H, W;
vector<string> grid;
vector<vector<bool>> visited;

void bfs(int i, int j)
{
  queue<pair<int, int>> q;
  q.push({i, j});
  visited[i][j] = true;

  const int directions[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

  while (!q.empty())
  {
    auto [cur_i, cur_j] = q.front();
    q.pop();

    for (const auto &dir : directions)
    {
      int new_i = cur_i + dir[0];
      int new_j = cur_j + dir[1];

      if (new_i >= 0 && new_i < H && new_j >= 0 && new_j < W && !visited[new_i][new_j] && grid[new_i][new_j] == '#')
      {
        visited[new_i][new_j] = true;
        q.push({new_i, new_j});
      }
    }
  }
}

int main()
{
  cin >> H >> W;
  grid.resize(H);
  visited.resize(H, vector<bool>(W, false));

  for (int i = 0; i < H; ++i)
  {
    cin >> grid[i];
  }

  int clusters = 0;
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      if (!visited[i][j] && grid[i][j] == '#')
      {
        bfs(i, j);
        clusters++;
      }
    }
  }

  cout << clusters << endl;

  return 0;
}