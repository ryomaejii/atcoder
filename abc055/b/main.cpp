// 開始: 9:55
// 終了: 10:00
// 解説:
// この問題は、N!を求める問題である。
// ただし、Nが大きいので、N!を求めるときに、
// 1000000007で割った余りを求めることに注意する。
// これは、N!が大きい数になると、オーバーフローしてしまうためである。
#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

int N;

int modNum = 1000000007;

int main()
{
  cin >> N;
  long long answer = 1;
  rep(i, 0, N)
  {
    answer *= (i + 1);
    answer %= modNum;
  }

  cout << answer << endl;
}