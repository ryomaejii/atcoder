#include <bits/stdc++.h>
using namespace std;

// 9x9マスの問題
int A[9][9];

int main()
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cin >> A[i][j];
    }
  }

  bool ok = true;

  // 各行に1~9が1つずつあるかどうか
  for (int i = 0; i < 9; i++)
  {
    bool row[9] = {};
    for (int j = 0; j < 9; j++)
    {
      row[A[i][j] - 1] = true;
    }
    for (int j = 0; j < 9; j++)
    {
      if (!row[j])
      {
        ok = false;
      }
    }
  }

  // 各列に1~9が1つずつあるかどうか
  for (int j = 0; j < 9; j++)
  {
    bool col[9] = {};
    for (int i = 0; i < 9; i++)
    {
      col[A[i][j] - 1] = true;
    }
    for (int i = 0; i < 9; i++)
    {
      if (!col[i])
      {
        ok = false;
      }
    }
  }

  // 各3x3のマスに1~9が1つずつあるかどうか
  for (int i0 = 0; i0 < 3; i0++)
  {
    for (int j0 = 0; j0 < 3; j0++)
    {
      bool block[9] = {};
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          block[A[i0 * 3 + i][j0 * 3 + j] - 1] = true;
        }
      }
      for (int k = 0; k < 9; k++)
      {
        if (!block[k])
        {
          ok = false;
        }
      }
    }
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}