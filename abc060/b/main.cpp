// A の倍数はいくつ足しても A の倍数です。よって、実は選ぶ数は 1 個だけ で良いです (いくつか選んで足さなくても、最終的な総和を直接選べます)。 次に、A%B, 2A%B, 3A%B, ... という数列を考えます。なお A%B は A を B で割ったあまりを表します。 ここで、(k + B)A%B = (kA + BA)%B = kA%B に注目すると、この数 列は周期的で、最初の B 個の要素を繰り返す数列になっていることがわかり ます。 よって、この問題は A から BA まで、愚直に B で割った余りを求めて調 べれば良いです。

#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))

int A, B, C;

int main()
{
  cin >> A >> B >> C;

  // Aの倍数の中（３倍以上）でBで割って余りがCになるものがあるかを判定する。
  rep(i, 1, B + 1)
  {
    if ((A * i) % B == C)
    {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
}