#include <iostream>  // cout, std::endl;
#include <algorithm> // std::sort, std::unique
#include <vector>    // std::vector
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N, K;
int A[200];
vector<int> vec;

int main()
{
  // 入力
  cin >> N >> K;
  rep(i, N)
  {
    cin >> A[i];
  }

  // arrayをvectorに変換
  rep(i, N)
  {
    vec.push_back(A[i]);
  }

  // vectorをソートして重複を削除
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());

  // vectorのサイズがK以下の場合は、0を出力して終了
  if (static_cast<int>(vec.size()) <= K)
  {
    cout << 0 << endl;
    return 0;
  }

  // vectorのサイズがKより大きい場合はKとの差分を出力して終了
  // しかし、重複は必ずしも2つではないので考える必要がある
  cout << static_cast<int>(vec.size()) - K << endl;

  return 0;
}
