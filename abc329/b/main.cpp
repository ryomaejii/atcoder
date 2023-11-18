#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;

int main()
{
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    A.push_back(a);
  }

  // 一旦Aをuniqueにする
  sort(A.begin(), A.end());
  set<int> s(A.begin(), A.end());

  // Aの中で2番目に大きい値を求める
  int max = 0;
  int second_max = 0;

  for (auto itr = s.begin(); itr != s.end(); ++itr)
  {
    if (max < *itr)
    {
      second_max = max;
      max = *itr;
    }
    else if (second_max < *itr)
    {
      second_max = *itr;
    }
  }

  cout << second_max << endl;
}