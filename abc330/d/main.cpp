#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countTriplets(int N, const vector<string> &grid)
{
  vector<int> rowCount(N, 0), colCount(N, 0);

  // 各行と列にある'o'の数を数える
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      if (grid[i][j] == 'o')
      {
        rowCount[i]++;
        colCount[j]++;
      }
    }
  }

  int count = 0;
  // 各'o'に対して、可能な三つ組を計算する
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      if (grid[i][j] == 'o')
      {
        // 同じ行と列にある他の'o'の数をカウントし、そのセル自体は除外する
        if (rowCount[i] > 1 && colCount[j] > 1)
        {
          count += (rowCount[i] - 1) * (colCount[j] - 1);
        }
      }
    }
  }

  return count;
}

int main()
{
  int N;
  cin >> N;
  vector<string> grid(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> grid[i];
  }

  cout << countTriplets(N, grid) << endl;

  return 0;
}