// 参考サイト: https://drken1215.hatenablog.com/entry/2019/12/14/171657

#include <bits/stdc++.h>
using namespace std;

int N;

int main()
{
  cin >> N;

  // bit全探索
  // 以下のfor文では、bitは0から2^N-1までの値を取る
  // 例えば、N=3の場合、bitは0,1,2,3,4,5,6,7の8通りの値を取る`
  // なぜならbitは2進数として扱われるから、0,1,2,3,4,5,6,7はそれぞれ000,001,010,011,100,101,110,111を表すから
  for (int bit = 0; bit < (1 << N); ++bit)
  {
    for (int i = 0; i < N; ++i)
    {
      // NOTE: bitはint型だが、以下の式では2進数として扱われる
      // 例えば、bit=5の場合、101として扱われる
      // 以下の式ではi桁目が1かどうか判定している
      if (bit & (1 << i))
      {
        // ここに処理を書く
      }
    }
    cout << endl;
  }

  // cout << answer << endl;
}